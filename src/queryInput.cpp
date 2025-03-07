#include "../include/queryParser.hpp"
#include "../include/timer.hpp"

std::string query;
std::vector<std::string> tokens;

void newLine() {
    std::cout << "cppdb> ";
    return; 
}
void queryTokenizer() {

    //interpreting each word in a string
    std::string t_query = query + ' ';
    std::string token;
    for (int i = 0; i < t_query.size(); i++) {
        if (t_query[i] == ' ') {
            tokens.push_back(token);
            token = "";
        } else {
            token = token + t_query[i];
        }
    }
    return;
}
void queryInput() {

    // taking the query as input in the variable

    std::getline(std::cin, query, ';');
    timer.start();
    // std::cout << "Your input: " << query << std::endl;
    queryTokenizer();

    return;
}


