#include <iostream>

int main() {

    std::cout << "Three numbers: ";
    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    std::cin >> num1 >> num2 >> num3;
    double tempNum = num1;

    if(num1 > num3) {
        num1 = num3;
        num3 = tempNum;
    }

    if(num2 > num3) {
        tempNum = num2;
        num2 = num3;
        num3 = tempNum;
    }

    if(num1 > num2) {
        tempNum = num1;
        num1 = num2;
        num2 = tempNum;   
    }

    std::cout << num1 << ", " << num2 << ", " << num3 << "\n";

    std::cout << "Three words: ";
    std::string word1 = " ";
    std::string word2 = " ";
    std::string word3 = " ";
    std::cin >> word1 >> word2 >> word3;
    std::string tempWord = word1;

    if(word1 > word3) {
        word1 = word3;
        word3 = tempWord;
    }

    if(word2 > word3) {
        tempWord = word2;
        word2 = word3;
        word3 = tempWord;
    }

    if(word1 > word2) {
        tempWord = word1;
        word1 = word2;
        word2 = tempWord;   
    }

    std::cout << word1 << ", " << word2 << ", " << word3 << "\n";

}