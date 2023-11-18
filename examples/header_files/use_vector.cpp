#include <iostream>

//def.h includes abc.h
//abc.h includes vector
#include "def.h"

int main()
{
    std::vector<int> vec = {1, 2, 3, 4};

    for (const auto& elem : vec)
        std::cout << elem << std::endl; 
}
