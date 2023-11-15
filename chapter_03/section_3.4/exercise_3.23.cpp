#include <iostream>
#include <vector>
#include <cctype>


int main()
{
    std::vector<int> vec = {9, 6, 3, 4, 5, 1, 2, 0, 7, 8};
   
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        *it *= *it;

    }

    for (auto it = vec.cbegin(); it != vec.cend(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
