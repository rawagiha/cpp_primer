#include <iostream>
#include <climits>
#include <cfloat>

int main()
{
    int a = 0;
    long b = 0;
    long long c = 0;
    short d = 0;
    float e = 0.1;
    double f = 0.1;
    
    std::cout << "On my system..." << std::endl;
    std::cout << "int takes " << sizeof(a) << " bytes and the range is " << INT_MIN << " " << INT_MAX << std::endl;
    std::cout << "long takes " << sizeof(b) << " bytes and the rainge is " << LONG_MIN << " " << LONG_MAX << std::endl; 
    std::cout << "long long takes " << sizeof(c) << " bytes and the rainge is " << LLONG_MIN << " " << LLONG_MAX << std::endl;
    std::cout << "short takes " << sizeof(d) << " bytes and the rainge is " << SHRT_MIN << " " << SHRT_MAX << std::endl;
    std::cout << "float takes " << sizeof(e) << " bytes and the rainge is " << FLT_MIN << " " << FLT_MAX << std::endl;
    std::cout << "doubel takes " << sizeof(f) << " bytes and the rainge is " << DBL_MIN << " " << DBL_MAX << std::endl;
    std::cout << std::endl;

    std::cout << "If I need an int that exactly takes 8 bits, use int8_t" << std::endl;
    int8_t _a = 0;
    std::cout << "Indeed, int8_t takes " << sizeof(_a) << " byte and the range is " << INT8_MIN << " " << INT8_MAX << std::endl;
    std::cout << "Similarly, " << std::endl;
    int16_t __a = 0;
    std::cout << "int16_t takes " << sizeof(__a) << " bytes and the range is " << INT16_MIN << " " << INT16_MAX << std::endl;
    std::cout << "Further, " << std::endl;
    int32_t ___a = 0;
    std::cout << "int32_t takes " << sizeof(___a) << " bytes and the range is " << INT32_MIN << " " << INT32_MAX << std::endl;
    
    return 0;
}
