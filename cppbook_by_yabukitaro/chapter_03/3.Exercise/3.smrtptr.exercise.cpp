//compile wtih -std=c++11 
#include <iostream>
#include <memory>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    typedef complex<double> cplx;

    auto p = make_shared<cplx>(5., 10);

    cout << abs(*p) << endl;
}
