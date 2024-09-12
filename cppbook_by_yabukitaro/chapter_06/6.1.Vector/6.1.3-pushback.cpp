#include <iostream>
#include <complex>
#include <vector>

using namespace std;

int main()
{
    typedef complex<double> cplx;

    vector<cplx> v;

    cplx a(0.3, 0.5);

    v.push_back(a);

    v.emplace_back(0.1, 0.2);

    for (auto i : v) {
        cout << i << endl;
    }
}

