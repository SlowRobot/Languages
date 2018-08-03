#include <iostream>

int main() {

    const double cmPerInch = 2.54;
    double length = 1;
    char unit = ' ';

    std::cout << "Enter a length and unit: ";
    std::cin >> length >> unit;

    if(unit == 'i') {
        std::cout << length << "in == " << length * cmPerInch << "cm\n";
    } else if(unit == 'c') {
        std::cout << length << "cm == " << length / cmPerInch << "in\n";
    } else {
        std::cout << "Unrecognised unit\n";
    }

}