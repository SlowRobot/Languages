#include <iostream>
#include <vector>

int main() {

    std::vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    for(int i : v) {
        std::cout << i << '\n';
    }

}