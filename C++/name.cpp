#include <iostream>

int main() {

    std::cout << "Please enter your first name and age: ";
    std::string firstName = "???";
    double age = 0;
    std::cin >> firstName >> age;
    firstName += " Jr.";
    age *= 12;
    std::cout << "Hello " << firstName << " (Age: " << age << " Months)\n";

}