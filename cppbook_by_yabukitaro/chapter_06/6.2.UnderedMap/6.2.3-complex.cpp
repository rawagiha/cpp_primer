#include <iostream>
#include <complex>
#include <string>
#include <unordered_map> 

using namespace std;

int main() {
    typedef complex<double> cplx;

    unordered_map<string, cplx> dict;
    
    cplx z(0.1, 0.2);
    dict["A"] = z; // by copying
    
    dict["B"] = cplx(0.3, 0.4); // by moving

    for (const auto& c : dict){
        cout << c.first << ", " << c.second << endl;
    }

}
