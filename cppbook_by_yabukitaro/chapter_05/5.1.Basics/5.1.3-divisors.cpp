#include <iostream>

using namespace std;

int numOfDivisors(int n) {
    int divisors = 0;
    
    for (int i = 1; i <= n; i++) {
        if (!(n % i)) {
            ++divisors;
        }
    }

    return divisors;
}


int main() {
    for (int i = 5; i <= 20; i++) {
        cout << i << " has " << numOfDivisors(i) << " divisors.\n";
    }
}
