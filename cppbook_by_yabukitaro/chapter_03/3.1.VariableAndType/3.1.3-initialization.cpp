#include <iostream>

using namespace std;

int main() {
    int a = 12345;
    int b(12345);
    int c{12345};
    int d = {12345};
    
    cout << a << ", " << b << ", " << c << ", " << d << endl;

    const int e = 1;
    //e = 2 does not compile;
    
    const int f; //uninitialized. can compile with -fpermissive. 
    cout << f << endl; //undefined? 
}
