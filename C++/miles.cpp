#include <iostream>

int main() {

    std::cout << "Miles: ";
    double miles = 0;
    std::cin >> miles;
    std::cout << "Kilometers: " << miles * 1.609 << "\n";

}