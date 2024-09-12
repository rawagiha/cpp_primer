#include <iostream>

using namespace std;

void mySwap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 3, b = 4;
    
    mySwap(a, b);

    cout << "a = " << a << ", " << "b = " << b << endl;
}
