#include <iostream> 
#include <typeinfo>
#include <string>

using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    double c = 0.1;
    double d = 0.2;
   
    string e = "abc";
    string f = "def"; 
    
    //implementation-defined.
    cout << typeid(e).name() << endl;

    mySwap(a, b);
    mySwap(c, d);
    mySwap(e, f);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;
    cout << "e = " << e << ", f = " << f << endl;
}
