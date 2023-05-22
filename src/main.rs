#![allow(non_snake_case)]
use tree_sitter::Parser as TreeParser;
use tree_sitter::Tree;

use clap::Parser;

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
    let tree = parse_program(&mut parser, &"x = 0;".to_string());
    println!("{}", tree.unwrap().root_node().to_sexp())
}
