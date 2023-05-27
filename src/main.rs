#![allow(non_snake_case)]

use std::collections::HashMap;
use tree_sitter::Parser as TreeParser;
use tree_sitter::Tree;

use crate::cfg::StateMachine;
use clap::Parser;
use derive_getters;

mod cfg;

fn parse_program(parser: &mut TreeParser, source_code: &String) -> Option<Tree> {
    parser.parse(source_code, None)
}

#[derive(Parser, Debug)]
#[command(name = "BatFix (Bugs After Transpilation Fix")]
#[command(author = "Daniel R. <danielrr@cmu.edu>")]
#[command(version = "0.1")]
#[command(about = "Automatically fixes bugs in transpiled source code, given an oracle")]
struct BatFixArguments {
    #[arg(long, short = 'c')]
    path_to_source: String,
    #[arg(long, short = 't')]
    path_to_transpiled: String,
}

fn main() {
    let _args = BatFixArguments::parse();

    let mut parser = TreeParser::new();
    parser.set_language(tree_sitter_java::language()).unwrap();
    let code = "\
    class A {\
    \
    public void test() {
        if (true) {
            int i = 0;
            return;
        }
    }
    }";
    let tree = parse_program(&mut parser, &code.to_string());
    println!("{}", tree.clone().unwrap().root_node().to_sexp());

    let mut states = StateMachine::new();
    let mut if_map: HashMap<String, Vec<String>> = HashMap::new();
    if_map.insert(
        String::from("condition"),
        vec![String::from("consequence"), String::from("alternative")],
    );

    states.insert(String::from("if_statement"), if_map);
    cfg::walk_tree(tree.unwrap().root_node(), &states, false);
}
