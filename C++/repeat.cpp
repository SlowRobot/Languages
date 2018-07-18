#include <iostream>

int main() {

    int numWords = 0;
    std::string previous = " ";
    std::string current;

    while(std::cin >> current) {
        numWords++;
        if(previous == current) {
            std::cout << "Repeated word: " << current << "at location: " << numWords << "\n";
        }
        previous = current;
    }
}