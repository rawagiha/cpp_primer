#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    typedef complex<double> cplx;

    cplx* p = new cplx(5., 10.);

    cout << abs(*p) << endl;

    delete p;
}
