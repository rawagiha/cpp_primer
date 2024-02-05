#include <iostream>
#include <vector>
#include <iterator>


int main()
{
    std::vector<int> v = {3, 2, 4, 6, 7, 1, 9};

    for (auto it = v.cend(); it != v.cbegin(); /* */)
    {
        std::cout << *(--it) << std::endl;
    }
    
    std::cout << std::endl;

    //moophy
    for (auto it = std::prev(v.cend()); true; --it)
    {
        std::cout << *it << std::endl;

        if (it == v.cbegin()) break;
    } 
}
