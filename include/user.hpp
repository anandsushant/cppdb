#ifndef USER_HPP
#define USER_HPP

#include <vector>
#include <string>


// struct user {
//     std::string userName;
//     std::string password;
//     std::string encrypted_password;
//     size_t database_count;  // number of databases of each user
//     std::vector<std::pair<std::string, int>> databases; // stores database name and databaseID
//     // add a logged in time function for each user
// };

class User {
    private:
        std::string password;
        // std::string encrypted_password;
    protected:
        std::string username;
        size_t database_count;  // number of databases of each user
        std::string user_directory; // location to user specific folder/directory
        std::vector<std::pair<std::string, int>> databases; // stores database name and databaseID
        // add a logged in time function for each user

    public:

        User(const std::string& username_x, const std::string& password_x) : username(username_x), password(password_x) {
            database_count = 0;

        }
};

#endif //USER_HPP