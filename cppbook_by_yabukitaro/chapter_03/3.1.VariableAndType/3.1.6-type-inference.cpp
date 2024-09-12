// needs -std=c++11 or higher to compile
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    auto x = 0;
    auto y = 0.0;
    
    cout << typeid(x).name() << endl; // i
    cout << typeid(y).name() << endl; // d
}
