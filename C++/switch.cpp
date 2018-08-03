#include <iostream>

int main() {

    const double cmPerInch = 2.54;
    double length = 1;
    char unit = ' ';

    std::cout << "Enter a length and unit: ";
    std::cin >> length >> unit;

    switch(unit) {
        case 'i':
            std::cout << length << "in == " << length * cmPerInch << "cm\n";
            break;
        case 'c':
            std::cout << length << "cm == " << length / cmPerInch << "in\n";
            break;
        default:
            std::cout << "Unrecognised unit\n";
            break;
    }

}