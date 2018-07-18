#include <iostream>

int main() {

    std::cout << "Enter two numbers: ";
    double num1 = 0;
    double num2 = 0;
    std::cin >> num1 >> num2;

    if(num1 > num2) {
        std::cout << "The first number is bigger\n";
    } else if(num1 == num2) {
        std::cout << "They are equal\n";
    } else {
        std::cout << "The second number is bigger\n";
    }

    std::cout << "Sum: " << num1 + num2 
              << "\nDifference: " << num1 - num2 
              << "\nProduct: " << num1 * num2
              << "\nRatio: " << num1 / num2
              << "\n";

}