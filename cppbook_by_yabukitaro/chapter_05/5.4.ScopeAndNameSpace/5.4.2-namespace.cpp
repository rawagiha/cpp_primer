#include <iostream>

using namespace std;

int x = 7; //global

namespace nameA {
    int x = 1; //local to A
}

namespace nameB {
    int x = 2; //local to B
}

int main () {
    int x = 3; //local to main;
    cout << "x in main = " << x << endl;
    cout << "global x = " << ::x << endl;
    cout << "x in A = " << nameA::x << endl;
    cout << "x in B = " << nameB::x << endl; 
}
