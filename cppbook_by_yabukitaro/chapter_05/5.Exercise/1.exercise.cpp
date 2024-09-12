#include <iostream>

using namespace std;

int factorial(int& n) {
    int ans = 1;

    if (n == 0) {
        return ans;
    }
    else if (n < 0){
        return 255;
    }
    else 
        for (int i = 1; i <= n; i++){
            ans *= i;
        }
        return ans;
}

int main() {
    for (int i = -1; i < 10; i++) {
        cout << "factorial(" << i << ") = " 
             << factorial(i) << endl;
    }
} 
