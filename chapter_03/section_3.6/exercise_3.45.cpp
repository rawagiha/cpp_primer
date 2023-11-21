#include <iostream>
#include <iterator>

int main()
{
    int ia[3][4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (const auto& row : ia)
    {
        for (const auto& elem : row)
        {
            std::cout << elem << std::endl;
        }
    }

    // p a pointer to row as arr (arr*)  
    for (auto p = std::begin(ia); p != std::end(ia); ++p)
    {
        // deref *p is array, q is a pointer to each elem (int*)
        for (auto q = std::begin(*p); q != std::end(*p); ++q)
        {
            std::cout << *q << std::endl;
        }
    }

    for (size_t i = 0; i != 3; ++i)
    {
        for (size_t j = 0; j != 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
}


