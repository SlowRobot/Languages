#include <iostream>

int main() {

    int i = 0;

    while(i <= 25) {
        std::cout << char('a' + i) <<'\t' << int('a' + i) << '\n';
        i++;
    }

}