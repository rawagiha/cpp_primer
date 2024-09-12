#include <iostream>
#include <random> 
#include <map>

std::mt19937 gen(777);

void getNormalRandomNumbers(double mean, double sd, int n, std::map<int, int>& freq) {
    std::normal_distribution<double> norm_rn(mean, sd);

    for (int i = 0; i < n; ++i) {
        double x = norm_rn(gen);
        ++freq[static_cast<int>(x)];
    }
}

int main() {
    std::map<int, int> freq;

    getNormalRandomNumbers(10, 5, 300, freq);

    for (auto i : freq) {
        std::cout << i.first << " | ";
        for (int j = 0; j < i.second; ++ j) std::cout << "*";
        std::cout << std::endl;
    }
} 
