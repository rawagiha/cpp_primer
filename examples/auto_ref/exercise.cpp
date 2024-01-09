#include <iostream>
#include <vector>

int main()
{
    int i = 7;
    int& ri = i;

    auto a = ri; // as value
    auto& b = ri; //as ref

    a = 8; 
    std::cout << i << std::endl;

    b = 9;
    std::cout << i << std::endl;
    
    std::cout << std::endl;
    std::vector<int> v = {1, 2, 3, 4, 5};

    v[2] = 8; // return as ref;
    auto j = v[3];
    j = 99;
  
    for (const auto& elem : v)
        std::cout << elem << std::endl;
    std::cout << std::endl;

    auto& h = v[3];
    h = 9999;

    for (const auto& elem : v)
        std::cout << elem << std::endl;
    std::cout << std::endl;

}
