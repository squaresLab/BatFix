#include "CodePreprocessing.h"
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <regex>

std::string replace_placeholder(std::string text, std::string placeholder, std::string value) {
    auto index = text.find(placeholder);
    auto prev_index = index;
    while (index != std::string::npos) {
        prev_index = index;
        index = text.find(placeholder, prev_index+1);
    }
    text = text.replace(prev_index, placeholder.length(), value);
    return text;
}

std::string remove_public(std::string code) {
    std::string p = "public :";
    auto idx = code.find(p);
    if (idx != std::string::npos) {
        code.erase(idx, p.length());
    }
    return std::move(code);
}

std::string remove_static(std::string code) {

    //corner_case
    std::string cc = "static // f_filled";
    std::string p = "static //";

    auto idx = code.find(cc);
    if (idx != std::string::npos) {

        std::regex rgx("\n(.*) f_gold");
        std::smatch matches;
        std::regex_search(code, matches, rgx);
        code.replace(idx, p.length(), matches[1].str());

        p = "(//)";
        idx = code.find(p);
        code.erase(idx, p.length());
    }
    else {
        auto idx = code.find(p);
        if (idx != std::string::npos) {
            code.erase(idx, p.length());
            // remove the comment
            p = "(//)";
            idx = code.find(p);
            code.erase(idx, p.length());
        }
    }

    // std::cerr << code;
    return std::move(code);
}


std::string file_to_string(std::string& file_name) {
    std::ifstream ifs(file_name);
    std::string content;
    content.assign( (std::istreambuf_iterator<char>(ifs) ),
                    (std::istreambuf_iterator<char>()    ) );

    return std::move(content);
}

std::vector<std::string> file_to_vector(std::string& file_name) {
    std::ifstream ifs(file_name);
    std::vector<std::string> lines;
    for (std::string line; std::getline( ifs, line ); /**/ )
        lines.push_back( line );
    return std::move(lines);
}

std::string add_foo(std::string& code) {
    std::string result;
    std::istringstream iss(code);
    std::string line;

    std::istringstream iss_tmp(code);
    bool found_foo = false;

    while (std::getline(iss_tmp, line)) {
        if (line.find("int foo;") != std::string::npos) {
            found_foo = true;
        }
    }

    if (found_foo)
        return code;

    while ( std::getline(iss, line) ) {
        if (line.find("f_filled") != std::string::npos) {
            result += "int foo;\n" ;
            break;
        }
        result += line + "\n";
    }
    do {
        result += line + "\n";
    } while (std::getline(iss, line));
    return std::move(result);
}

std::string preprocess(std::string& code) {
    code = remove_public(code);
    code = remove_static(code);
    code = add_foo(code);
    return std::move(code);
}