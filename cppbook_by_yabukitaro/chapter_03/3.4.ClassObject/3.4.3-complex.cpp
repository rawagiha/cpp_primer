#include <iostream>
#include <complex>

using namespace std;
typedef complex<double> cplx;

int main() {
    cplx* p = new cplx(5., 7.);
    
    cout << p << endl;
    cout << *p << endl;

    cplx* q = new cplx(*p);

    cout << q->real() << endl;
    cout << (*q).imag() << endl;

    delete p;
    delete q;
}
