#include<iostream>
#include<typeinfo>

using namespace std;
typedef unsigned int uint;

int main() {
    
    uint x = 3;

    typedef unsigned int nonnegative;
    nonnegative y = 3;

    unsigned int z = 3;
  
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;

    cout << x + y + z << endl;
}
