#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        return n * factorial(n - 1);
    }
    else 
        return 255;
}

int main() {   
    cout << factorial(0) << endl;
    
    int i = 5;
    cout << factorial(i) << endl;

    int j = -6;
    cout << factorial(j) << endl;
}
