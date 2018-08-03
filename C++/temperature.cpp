#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<double> temps;
    for(double temp; std::cin >> temp;) {
        temps.push_back(temp);
    }

    double sum = 0;
    for(double x: temps) {
        sum += x;
    }

    std::cout << "Average Temperature: " << sum / temps.size() << "\n";

    std::sort(temps.begin(), temps.end());

    std::cout << "Median Temperature: " << temps[temps.size() / 2] << "\n";

}