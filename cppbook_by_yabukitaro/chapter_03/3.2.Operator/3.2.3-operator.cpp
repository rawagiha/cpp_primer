#include <iostream>

using namespace std;

int main() {
    //cout << 1 < 2 << endl; // ( ) needed
    cout << (1 < 2) << endl; // 1

    cout << (1 != 1) << endl; // 0
    cout << (1 != 1.0) << endl; // 0

    cout << (1.0 > 0.999999999999) << endl; // 1
    cout << (1.0 > 0.99999999999999999999) << endl; // 0
    cout << (1.0 < 0.99999999999999999999) << endl; // 0
    cout << (1.0 == 0.99999999999999999999) << endl; // 1
    cout << (1.0 != 0.99999999999999999999) << endl; // 0
}  
