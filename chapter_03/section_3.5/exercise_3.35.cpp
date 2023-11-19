#include <iostream>

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6};
    
    for (auto p = std::begin(ia); p != std::end(ia); ++p)
    {
        *p = 0;
    }

    for (auto elem : ia)
        std::cout << elem << std::endl;
}
