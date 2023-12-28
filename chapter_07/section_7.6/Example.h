#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <vector>

class Example
{
public:
    constexpr static double rate = 6.5;
    static const int vec_size = 20;
    //static std::vector<double> vec(vec_size); this is an in-class init
    static std::vector<double> vec;
};

#endif
