#include <iostream>

using namespace std;

int main() {
    cout << (2 < 1 ? "2 is smaller than 1" : "2 is not smaller than 1") << endl;
    
    int m = 0;
    cout << (m = 1, m + 2) << endl;
    
    int a = 3, b = 3, c = 0, d = 0;
    cout << (c = a++,  a + c) << endl;
    cout << (d = ++b,  b + d) << endl;
}
