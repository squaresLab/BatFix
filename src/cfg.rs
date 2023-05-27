// Define a simple CFG node with its name and list of next nodes.

use derive_getters::Getters;
use std::collections::HashMap;
use std::fmt;
use std::fmt::format;
use tree_sitter::Node;
use tree_sitter::TreeCursor;

pub type StateMachine = HashMap<String, HashMap<String, Vec<String>>>;

#[derive(Debug, Getters)]
pub struct CfgNode<'a> {
    node: Node<'a>,
    next: Vec<CfgNode<'a>>,
}

impl<'a> fmt::Display for CfgNode<'a> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        // Start with printing the current node
        write!(f, "{:?}", self.node)?;

        // If this node has successors, print them
        if !self.next.is_empty() {
            write!(f, " -> ")?;

            // Recursively print each successor
            for (i, next_node) in self.next.iter().enumerate() {
                write!(f, "{}", next_node)?;
                if i < self.next.len() - 1 {
                    write!(f, ",")?;
                }
            }

            write!(f, ";")?;
        }
        Ok(())
    }
}

// This function would walk the syntax tree, taking actions based on the state machine,
// and return a CFG node representing the subtree rooted at the given Tree-sitter node.
pub fn walk_tree<'a>(node: Node<'a>, state_machine: &StateMachine, is_block: bool) -> CfgNode<'a> {
    let node_type = node.kind();

    let mut cfg_node = CfgNode {
        node: node.clone(),
        next: Vec::new(),
    };

    if let Some(transitions) = state_machine.get(node_type) {
        for (from, to) in transitions {
            // println!("Transitioning from state: {}", from);
            let mut cursor = node.walk();
            for child in node.named_children(&mut cursor) {
                for next in to {
                    if let Some(next_node) = node.child_by_field_name(next) {
                        let child_cfg_node = walk_tree(next_node, state_machine, false);
                        println!("{}", child_cfg_node);
                        cfg_node.next.push(child_cfg_node);
                    }
                }
            }
        }
    } else if node.kind() == "block" {
        let mut cursor = node.walk();
        let mut cur_cfg = &mut cfg_node;
        for child in node.named_children(&mut cursor) {
            let mut child_cfg_node = walk_tree(child, state_machine, true);
            cur_cfg.next.push(child_cfg_node);
            cur_cfg = &mut cur_cfg.next[0];
        }

        println!("{}", format!("{:?}", node));
        println!("{}", format!("{:?}", node.named_child_count()));
    } else if !is_block {
        let mut cursor = node.walk();
        let mut cur_cfg = &cfg_node;
        for child in node.named_children(&mut cursor) {
            let child_cfg_node = walk_tree(child, state_machine, false);
            cfg_node.next.push(child_cfg_node);
        }
    }

    cfg_node
}
