#include <iostream>
#include <list>
#include <iterator>


int main()
{
    std::list<int> slist = {2, 3, 4};
    
    auto b = slist.begin(), e = slist.end();
    auto it = slist.erase(b, b);
    std::cout << *it << std::endl;
    auto _it = slist.erase(e, e);
    std::cout << slist.empty() << std::endl;
    for (const auto& elem : slist)
        std::cout << elem << std::endl;
}
