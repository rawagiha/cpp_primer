#include <iostream>

using namespace std;

void mySwap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void mySwap(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    double c = 0.1;
    double d = 0.2;

    mySwap(a, b);
    mySwap(c, d);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;
}
