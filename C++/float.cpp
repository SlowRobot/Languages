#include <iostream>
#include <cmath>

int main() {

    std::cout << "Please enter a floating-point value: ";
    double n;
    std::cin >> n;
    std::cout << "n = " << n
              << "\nn + 1 = " << n + 1
              << "\n3 x n = " << 3 * n
              << "\n2 x n = " << n + n
              << "\nn ^ 2 = " << pow(n, 2)
              << "\n1/2 x n = " << n /2
              << "\nsqrt(n) = " << sqrt(n)
              << "\n";

}