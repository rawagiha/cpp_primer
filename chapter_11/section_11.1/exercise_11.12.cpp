#include <string>
#include <utility>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::string> v = {"this", "is", "a", "pen"};
    std::vector<int> u = {4, 2, 1, 3};
    
    auto it_v = v.cbegin();
    auto it_u = u.cbegin();

    std::vector<std::pair<std::string, int>> res;
    while (it_v != v.cend() || it_u != u.cend())
    {
        res.push_back(std::make_pair(*it_v, *it_u));    
        ++it_v;
        ++it_u;
    }

    for (auto elem : res)
    {
        std::cout << elem.first << " " << elem.second << std::endl;
    }
}
