#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::list<int> lst = {4, 2, 5, 7, 32, 1, 56, 7};
    
    std::deque<int> even, odd;

    for (auto it = lst.cbegin(); it != lst.cend(); ++it)
    {
        if (*it % 2)
        {
            odd.push_back(*it);
        }
        else
        {
            even.push_back(*it);
        }
    }
    
    for (const auto& elem : odd)
        std::cout << elem << std::endl;

    std::cout << std::endl;

    for (const auto& elem : even)
        std::cout << elem << std::endl;
}
