#include <iostream>
#include <vector>
#include <iterator>


bool is_found(std::vector<int>::const_iterator begin, 
              std::vector<int>::const_iterator end,
              int target)
{
    while (begin != end)
    {
        if (*begin == target) return true;
        ++begin;
    }

    return false;
}


int main()
{
    std::vector<int> vec = {4, 2, 6, 7, 0};
    
    std::cout << is_found(vec.cbegin(), vec.cend(), 7) << std::endl;
    std::cout << is_found(vec.cbegin(), vec.cend(), 3) << std::endl;
}
