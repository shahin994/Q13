#include <iostream>
#include <string>

int main() {
    std::string password;
    std::string inputPassword;

    std::cout << "Set a password: ";
    std::cin >> password;

    while (true) {
        std::cout << "Enter the password: ";
        std::cin >> inputPassword;

        if (inputPassword == password) {
            std::cout << "Access granted! Correct password entered." << std::endl;
            break;
        } else {
            std::cout << "Incorrect password. Please try again." << std::endl;
        }
    }

    return 0;
}