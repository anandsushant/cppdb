#ifndef QUERY_PARSER_HPP
#define QUERY_PARSER_HPP

#include <iostream>
#include <vector>
#include <string>

extern std::string query;
extern std::vector<std::string> tokens;

void newLine();
void queryInput();
void queryTokenizer();

#endif // QUERY_PARSER_HPP