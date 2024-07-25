#ifndef _PRE_GUARD
#define _PRE_GUARD
#include <string>
#include <vector>

std::string replace_placeholder(std::string text, std::string placeholder, std::string value);

std::string remove_public(std::string code);

std::string remove_static(std::string code);

std::string file_to_string(std::string& file_name);

std::vector<std::string> file_to_vector(std::string& file_name);

std::string add_foo(std::string& code);

std::string preprocess(std::string& code);

#endif
