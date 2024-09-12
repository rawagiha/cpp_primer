#include <iostream>

using namespace std;

int fib(int n) {
    if (n < 3) {
        return 1;
    }
    else
        return fib(n - 2) + fib(n - 1);
}

int main() {
    for (unsigned int i = 1; i < 21; i++) {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
}
