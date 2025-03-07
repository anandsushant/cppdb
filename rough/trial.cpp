#include <iostream>

void queryInput() {

    // taking the query as input in the variable
    std::string query;
    std::getline(std::cin, query, ';');
    // std::cout << "Your input: " << input << std::endl;

    return;
}

int main() {
    queryInput();
    return 0;
}