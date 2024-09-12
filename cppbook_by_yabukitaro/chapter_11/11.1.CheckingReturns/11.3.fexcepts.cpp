#include <iostream>
#include <cfenv>
#include <cmath>

void report_fexcepts() {
    if (fetestexcept(FE_DIVBYZERO)) std::cout << "FE_DIVBYZERO\n";
    if (fetestexcept(FE_INEXACT)) std::cout << "FE_INEXACT\n";
    if (fetestexcept(FE_OVERFLOW)) std::cout << "FE_OVERFLOW\n";
    if (fetestexcept(FE_UNDERFLOW)) std::cout << "FE_UNDERFLOW\n";
    if (fetestexcept(FE_INVALID)) std::cout << "FE_INVALID\n";
    feclearexcept(FE_ALL_EXCEPT);
    std::cout << std::endl;
}

int main() {
    double d;
    float f;

    d = 0;
    std::cout << 1.0 / d << std::endl;
    
    std::cout << "\n";
    
    d = 1e300;
    f = d;
    report_fexcepts();

    d = 1e-300;
    f = d;
    report_fexcepts();

    std::cout << sqrt(-1.0) << std::endl;
    report_fexcepts();
}
