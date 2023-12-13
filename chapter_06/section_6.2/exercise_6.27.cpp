#include <iostream>
#include <initializer_list>

int sum(const std::initializer_list<int>& lst)
{
    int i = 0;
    for (auto beg = lst.begin(); beg != lst.end(); ++beg)
    {
        i += *beg;
    }

    return i;
}


int main()
{
    std::initializer_list<int> lst{5, 6, 4, 3, 1, 9, 8};

    std::cout << sum(lst) << std::endl;
}

