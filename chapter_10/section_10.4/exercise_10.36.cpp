#include <list>
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::list<int> lst = {0, 1, 4 ,5, 0, 9, 5 ,0, 6, 0, 9, -1};

    auto r_it = std::find(lst.crbegin(), lst.crend(), 0);

    std::vector<int> v(r_it.base(), lst.cend());

    for (auto elem : v)
        std::cout << elem << std::endl;
}
