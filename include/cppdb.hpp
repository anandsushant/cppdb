#ifndef CPPDB_HPP
#define CPPDB_HPP

#include "../include/user.hpp"
#include <iostream>

class Users {
    private:
        std::vector<User> users_list;
    public:
        // void add_user(user current_user);
        // void show_users();
        // void get_user();
        // void delete_user();
        void login();
        void signup();
};

extern Users users;

// after securely logging in
class current_user {
    private:
        std::vector<std::pair<std::string, int>> database_list;
};

#endif // CPPDB_HPP