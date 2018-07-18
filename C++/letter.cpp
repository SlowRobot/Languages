#include <iostream>

int main() {

    std::cout << "Please enter addressee's first and last name: ";
    std::string first;
    std::string second;
    std::cin >> first >> second;

    std::cout << "Please enter your friend's name and sex: ";
    std::string friendName;
    char sex = ' ';
    std::cin >> friendName >> sex;

    std::cout << "Please enter an age: ";
    int age = 0;
    std::cin >> age;

    std::cout << "Dear " << first << ' ' << second << ",\n";
    std::cout << "\n    How are you? I am fine. I miss you. ";
    std::cout << "Have you seen " << friendName << " lately? ";
    std::cout << "If you see " << friendName << " please ask ";
    if(sex == 'M') {
        std::cout << "him ";
    } else {
        std::cout << "her ";
    }
    std::cout << "to call me. ";
    std::cout << "I hear you just had a birthday and you are " << age << " years old. ";
    if(age < 12) {
        std::cout << "Next year you will be " << age + 1 << ". ";
    } else if(age == 17) {
        std::cout << "Next year you will be able to vote. ";
    } else if(age > 70) {
        std::cout << "I hope you are enjoying retirement. ";
    }

    std::cout << "\n\nYours sincerly,\nFirst Last\n\n";

}