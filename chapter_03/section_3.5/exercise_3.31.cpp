#include <iostream>
#include <cstddef>

int main()
{
    constexpr size_t array_size = 10;

    int ia[array_size] = {} ; //initialized to zeros

    for (size_t ix = 1; ix < array_size; ++ix)
    {
        std::cout << ia[ix] << ", ";
        ia[ix] = ix;
    }
    std::cout << std::endl;

    for (auto it = std::begin(ia); it != std::end(ia); ++it)
    {
        std::cout << *it << std::endl;
    }
}
