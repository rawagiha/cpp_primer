#include <iostream>
#include <vector>
#include <iterator>


std::vector<int>::const_iterator find_it
(
    std::vector<int>::const_iterator begin, 
    std::vector<int>::const_iterator end,
    int target
)
{
    while (begin != end)
    {
        if (*begin == target) return begin;
        ++begin;
    }

    return end;
}


int main()
{
    std::vector<int> vec = {4, 2, 6, 7, 0};
    
    auto b = vec.cbegin(), e = vec.cend();
    auto it = find_it(b, e, 7);
    auto it2 = find_it(b, e, 3);
    auto it3 = find_it(b, e, 2);
     
    std::cout << (it == vec.cend())  << std::endl;
    std::cout << (it2 == vec.cend()) << std::endl;
    std::cout << (it3 == vec.cend()) << std::endl;
}
