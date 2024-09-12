#include <iostream>
#include <complex>
#include <string>
#include <unordered_map> 

using namespace std;
typedef complex<double> cplx;

namespace std {
    template<>
    struct hash<cplx> {
        size_t operator()(const cplx& z) const {
            size_t h1 = hash<double>()(z.real());
            size_t h2 = hash<double>()(z.imag());
            return h1 ^ h2;
        }
    };
}


int main() {

    unordered_map<cplx, string> dict;
    
    dict[cplx(0.1, 0.2)] = "A";
    dict[cplx(0.3, 0.4)] = "B";

    for (const auto& c : dict){
        cout << c.first << ", " << c.second << endl;
    }

}
