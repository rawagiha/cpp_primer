#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    
    std::vector<int> v(std::begin(ia), std::end(ia)); 
    std::list<int> lst(std::begin(ia), std::end(ia));

    auto it = v.begin();
    while (it != v.end())
    {
        if (*it % 2)
            ++it;
        else
            it = v.erase(it);
    }

    auto _it = lst.begin();
    while (_it != lst.end())
    {
        if (*_it % 2)
            _it = lst.erase(_it);
        else
            ++_it;
    }

    for (const auto elem : v)
        std::cout << elem << std::endl;
    std::cout << std::endl;
    
    for (const auto elem : lst)
        std::cout << elem << std::endl;
}
