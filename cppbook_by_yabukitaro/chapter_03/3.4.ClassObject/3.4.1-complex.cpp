#include <iostream>
#include <complex>
#include <cmath>

using namespace std;
typedef complex<double> cplx;

int main() {
    cplx a;
    cout << a << endl;

    cplx b(3., 4.);
    cout << b << endl;

    // initialize c by copying b 
    cplx c(b);
    cout << c << endl;

    // create d and assign b by copying  
    cplx d;
    d = b;
    cout << d << endl;

    cout << c.real() << ", " << c.imag() << endl;
    cout << abs(c) << endl;
}
