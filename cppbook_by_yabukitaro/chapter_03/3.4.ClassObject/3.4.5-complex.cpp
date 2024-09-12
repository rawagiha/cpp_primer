//needs -std=c++11 or higher to compile
#include <iostream>
#include <complex>
#include <memory>

using namespace std;
typedef complex<double> cplx;

int main() {
    auto p = make_shared<cplx>(1., 2.);
    
    auto q = make_shared<cplx>(*p);

    cout << q->real() << endl;
    cout << q->imag() << endl;
}
