#include <iostream>
#include <vector>
#include <iterator>
#include <cstddef>
int main()
{
    std::vector<int> vec = {23, 45, 56, 67, 78, 98, 100};
    constexpr size_t arr_sz = 7; //= vec.size() can't do constexpr
    
    int int_arr[arr_sz];
    size_t i = 0;
    for (auto it = std::begin(int_arr); it != std::end(int_arr); ++it)
    {
        *it = vec[i];
        ++i;
    }

    for (auto& elem : int_arr)
        std::cout << elem << std::endl;
}
