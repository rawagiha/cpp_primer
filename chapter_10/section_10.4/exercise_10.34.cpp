#include <iostream>
#include <vector>
#include <iterator>


int main()
{
    std::vector<int> v = {3, 2, 4, 6, 7, 1, 9};

    for (auto rit = v.crbegin(); rit != v.crend(); ++rit)
    {
        std::cout << *rit << std::endl;
    }
}
