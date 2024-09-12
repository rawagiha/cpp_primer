//needs -std=c++11 or higher to compile
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    unsigned int x = 2;
    int y = 3;

    auto z = x + y;

    cout << typeid(z).name() << endl; //j
}
