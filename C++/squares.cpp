#include <iostream>

int square(int x);

int main() {

    for(int i = 0; i < 10; i++) {
        std::cout << i << '\t' << square(i) << '\n';
    }

}

int square(int x) {
    int sum = 0;
    for(int i = 0; i < x; i++) {
        sum += x;
    }
    return sum;
}