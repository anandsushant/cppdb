#include "../include/DBengine.hpp"

queryType getQuery() {

    if (tokens.size() == 0) return queryType::UNKNOWN;

    if (tokens[0] == "CREATE") return queryType::CREATE;
    else if (tokens[0] == "SELECT") return queryType::SELECT;
    else if (tokens[0] == "UPDATE") return queryType::UPDATE;
    else if (tokens[0] == "DELETE") return queryType::DELETE;
    else if (tokens[0] == "INSERT") return queryType::INSERT;
    else if (tokens[0] == "COUNT") return queryType::COUNT;
    else if (tokens[0] == "USE") return queryType::USE;
    else if (tokens[0] == "LIST") return queryType::LIST;
    else if (tokens[0] == "EXIT") return queryType::EXIT;

    return queryType::UNKNOWN;
}

void executeQuery() {

    queryType type = getQuery();

    switch(type) {
        case queryType::SELECT:
            // code here for select commands
            break;
        case queryType::CREATE:
            // code here for create commands
            break;
        case queryType::UPDATE:
            // code here for update commands
            break;
        case queryType::INSERT:
            // code here for insert commands
            break;
        case queryType::DELETE:
            // code here for delete commands
            break;
        case queryType::USE:
            // code here for use commands
            break;
        case queryType::LIST:
            // code here for list commands
            break;
        case queryType::EXIT:
            // code here for exit command
            break;
        default:
            break;
    }
    return;
}