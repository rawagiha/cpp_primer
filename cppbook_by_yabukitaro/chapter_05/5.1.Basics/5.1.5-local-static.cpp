#include <iostream>

using namespace std;

int f() {
    int x = 0;
    ++x;
    return x;
}

int g() {
    static int x = 0;
    ++x;
    return x; 
}

int main() {
   
   cout << f() << endl;
   cout << f() << endl;
   cout << f() << endl;

   cout << g() << endl;
   cout << g() << endl;
   cout << g() << endl;
}
