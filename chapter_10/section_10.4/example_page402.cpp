#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

std::ostream& print(std::ostream& os, int i, char c)
{
    return os << i << c;
}

template <typename T>
void show(std::ostream& os, const T& t)
{
    std::for_each(t.cbegin(), t.cend(), 
                  std::bind(print, std::ref(os), std::placeholders::_1, ' '));
}

int main()
{
    std::list<int> lst{1, 2, 3, 4};
    std::list<int> lst2, lst3;

    std::copy(lst.cbegin(), lst.cend(), std::front_inserter(lst2));

    std::copy(lst.cbegin(), lst.cend(), std::inserter(lst3, lst3.begin()));

    show(std::cout, lst2);
    std::cout << std::endl;

    show(std::cout, lst3);
    std::cout << std::endl;
}
