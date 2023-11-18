#include <iostream>
#include <vector>
#include <cstddef>

int main()
{
    constexpr size_t array_size = 10;

    int ia[array_size] = {}; //initialized to zeros

    for (size_t ix = 1; ix < array_size; ++ix)
    {
        std::cout << ia[ix] << ", ";
        ia[ix] = ix;
    }
    
    int ia2[array_size] = {};
    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia2[ix] = ia[ix];
    }
    
    std::cout << std::endl;

    for (auto it = std::begin(ia2); it != std::end(ia2); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::vector<int> vec;
    for (int ix = 0; ix < 10; ++ix)
    {
        vec.push_back(ix);
    } 

    std::vector<int> vec2;
    vec2 = vec;
    
    for (auto& elem : vec2)
    {
        std::cout << elem << std::endl;
    }
}
