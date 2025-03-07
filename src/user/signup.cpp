#include "../include/cppdb.hpp"

void encrypter() {
    // passowrd encryption logic
    return;
}

bool isSignedUpUser(const std::string& username) {
    // username check logic goes here
    for (int i = 0; i < users_list.size(); i++) {
        if (username == users_list[i]) {
            return true;
        }
    }
    return false;
}

bool isValidPassword(const std::string& password) {
    // add logic for stronger password
    return (password.size() >= 3)
}



void signup() {

    size_t tries{10};
    size_t c_tries{3};
    std::string username{""};
    std::string password{""};
    std::string ret_password{""};
    // bool passwordSetFlag{false};

    // Username Input
    while (tries > 0) {
        std::cout << "Enter Username: ";
        std::getline(std::cin, username);

        if (isSignedUpUser(username)) {
            tries--;
            if (tries == 0) {
                std::cout << "\nToo many attempts. Try again later.";
                return; // break out of signup function and exit()
            }
            std::cout << "\nUsername already taken. Try again.";
        } else {
            break;  // Username is available
        }
    }

    // while (tries > 0) {
    //     std::cout << "Enter Username: ";
    //     std::getline(std::cin, username);
    //     // std::cin >> username;
    //     if (isSignedUpUser(username)) {
    //         std::cout << std::endl;
    //         std::cout << "Username alerady taken. Try again!";
    //         username = "";
    //         tries--;
    //         continue;
    //     } else if (isSignedUpUser(username) && tries == 1) {
    //         std::cout << std::endl;
    //         std::cout << "Username already taken. Too many failed attempts. Try again later." << std::endl;
    //         // exit()
    //     } else {
    //         break;
    //     }
    // }

    tries = 3;
    // while (tries > 0) {

    //     while (c_tries > 0) {

    //         password = "";
    //         std::cout << std::endl;
    //         std::cout << "Enter Password: ";
    //         std::getline(std::cin, password);
    //         // std::cin >> password;

    //         if(!isValidPassword(password) && c_tries == 1) {
    //             std::cout << std::endl;
    //             std::cout << "Too many failed attempts!! Try again later." << std::endl;
    //             c_tries--;
    //             break;
    //             // exit();
    //         } else if (!isValidPassword(password)) {
    //             std::cout << std::endl;
    //             std::cout << "Password invalid!! Try Again.";
    //             c_tries--;
    //         } else {
    //             break; // password valid, not go to retr password
    //         }
    //     }

    //     std::cout << "Confirm Password: ";
    //     std::getline(std::cin, ret_password);
    //     // std::cin >> ret_password;

    //     if(password == ret_password) {
    //         // encrypt the password
    //         // logic for adding user to user_list
    //         break;
    //     } else if(password != ret_password) {
    //         std::cout << "Password do not match. Try Again!";
    //         tries--;
    //         continue;
    //     } else if(password != ret_password && tries == 1) {
    //         std::cout << "Password do not match. Try again later!" << std::endl;
    //         // exit() logic for ending execution
    //     }
    // }


    // Password Input and Confirmation
    while (tries > 0) {
        std::cout << "Enter Password: ";
        std::getline(std::cin, password);

        if (!isValidPassword(password)) {
            tries--;
            if (tries == 0) {
                std::cout << "Too many failed attempts for password. Try again later.\n";
                return;
            }
            std::cout << "Password invalid! Please try a stronger password.\n";
            continue;
        }

        std::cout << "Confirm Password: ";
        std::getline(std::cin, ret_password);

        if (password == ret_password) {
            // encrypter(password);  // Encrypt the password
            users_list.push_back(username);  // Add username to the users list
            // Store the encrypted password securely
            std::cout << "User signed up successfully!\n";
            return;
        } else {
            std::cout << "Passwords do not match. Try again.\n";
            tries--;
        }
    }
    return;
}