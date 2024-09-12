#include <iostream>

using namespace std;

int main() {
    unsigned int a = 2;
    int b = -3;

    // int b is coverted to unsigned -> 4294967293 on my system
    // 4294967293 + 2 = 4294967295
    cout << a + b << endl;
    
    // int -1 is converte to 4294967295 > 2
    cout << (
        -1 <= a ? "unsigned a = 2 is not smaller than int -1" 
        : "unsigned a = 2 is smaller than int -1"
    ) << endl;
}
