#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int numOfDivisors (int n) {
    int divisors = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) ++divisors; 
    }
    return divisors;
}

int main() {
    auto t0 = high_resolution_clock::now();
    
    vector<int> v;
    for (int i = 1; i < 10000; ++i) {
        for (int j = 0; j < 30; ++j) {
            v.push_back(numOfDivisors(i + j));
        }
    }

    auto t1 = high_resolution_clock::now();

    cout << duration_cast<milliseconds>(t1 -t0).count() / 1000.0 << "s." << endl;
}
