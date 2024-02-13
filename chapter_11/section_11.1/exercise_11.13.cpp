#include <utility>
#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::pair<std::string, int>> a;
    std::vector<std::pair<std::string, int>> b;
    std::vector<std::pair<std::string, int>> c;
    std::vector<std::pair<std::string, int>> d;

    const std::vector<std::string> v{"this", "is", "a", "pen"};
    const std::vector<int> u = {4, 2, 1, 3};

    auto it_v = v.cbegin();
    auto it_u = u.cbegin();

    while (it_v != v.cend() || it_u != u.cend())
    {
        a.push_back(std::pair<std::string, int>(*it_v, *it_u));
        b.push_back(std::make_pair(*it_v, *it_u));
        c.push_back({*it_v, *it_u});
        d.emplace_back(*it_v, *it_u);

        ++it_v;
        ++it_u;
    }

    if (a == b && b == c && c == d)
    {
        for (const auto& elem : c)
            std::cout << elem.first << " " << elem.second << std::endl;
    }
}
