#include <iostream>
#include <utility>
#include <set>
#include <map>
#include <vector>

int main()
{
    std::vector<int> ivec = {2, 4, 6, 8, 2, 4, 6, 8};

    std::set<int> _set;
    _set.insert(ivec.cbegin(), ivec.cend());

    for (auto it = _set.cbegin(); it != _set.cend(); ++it)
        std::cout << *it << std::endl;
    std::cout << std::endl;

    _set.insert({1, 3, 5, 7, 1, 3, 5, 7});
    for (auto it = _set.cbegin(); it != _set.cend(); ++it)
        std::cout << *it << std::endl;
    std::cout << std::endl;
}
