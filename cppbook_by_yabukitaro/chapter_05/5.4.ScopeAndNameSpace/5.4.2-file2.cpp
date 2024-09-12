//g++ 5.4.3-file1.cpp 5.4.3-file2.cpp -o 5.4.3-file
#include <iostream>

using namespace std;

void f(); // defined in 5.4.3-file1.cpp

int main() {
    extern int x; // defined in 5.4.3-file1.cpp
    cout << x << endl;
    f();
}
