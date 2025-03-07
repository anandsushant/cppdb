#include "../include/cppdb.hpp"
#define TRIES_COUNT 3

bool isSignedUpUser() {
    // username check logic goes here
    return true;
}

bool isCorrectPassword() {
    // password check logic goes here
    return true;
}

void decrypter() {
    // passowrd decryption logic
    return;
}

void login() {

    size_t tries{TRIES_COUNT};
    std::string username{""};
    std::string password{""};
    char choice{''};
    bool flag{true};
    bool t_flag{true};

    while (flag) {

        std::cout << "Enter Username: ";
        std::cin >> username;

        if (!isSignedUpUser()) {
            std::cout << std::endl;
            std::cout << "User not found!" << std::endl;
            while (tries > 0) {
                std::cout << "SIGN UP! or try again (s/T)? " << std::endl;
                std::cin >> choice;
                if (choice == 'T' || choice == 't') {
                    break;
                } else if (choice == 'S' || choice == 's') {
                    // ***signup();  // implement signup function
                    break;
                } else {
                    std::cout << "Input ERROR!!!" << std::endl;
                    // ***exit();  // implement exit function
                }
            }
        } else {
            tries = TRIES_COUNT;
            while (tries > 0) {
                std::cout << std::endl;
                std::cout << "Enter password: ";
                std::cin >> password;

                if (!isCorrectPassword()) {
                    tries--;
                    std::cout << "INCORRECT PASSWORD!!!" << std::endl;
                    std::cout << "try again...";
                    password = "";
                } else {
                    flag = false;
                    // logging in success flag and current user updation logic here
                    break;
                }
            }
        }
    }
    return ;
}