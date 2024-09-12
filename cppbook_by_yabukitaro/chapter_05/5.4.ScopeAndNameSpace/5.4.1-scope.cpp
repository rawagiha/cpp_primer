#include <iostream>

using namespace std;

int x = 7; //global

void f() {
    int y = 2; //local to y
    cout << "y in f = " << y << endl;
}

int main() {
    x = 1;
    int y = 1; //local to main
    
    f();
    cout << "y in main = " << y << endl;
    cout << "global x = " << x << endl;
}
