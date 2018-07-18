#include <iostream>

int main() {

    std::cout << "Please enter your first and last name: ";
    std::string first;
    std::string second;
    std::cin >> first >> second;

    if(first == second) {
        std::cout << "Hello " << first << " and " << second << "!\n";
    } else {
        std::string name = first + ' ' + second;
        std::cout << "Hello " << name << "!\n";
    }

}