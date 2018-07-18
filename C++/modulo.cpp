#include <iostream>

int main() {

    std::cout << "Enter a number: ";
    int number = 0;
    std::cin >> number;
    std::cout << number << " is ";
    if((number % 2) == 0) {
        std::cout << "even";
    } else {
        std::cout << "odd";
    }
    std::cout << "\n";

}