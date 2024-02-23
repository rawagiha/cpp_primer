#include <map>
#include <string>
#include <iostream>

int main()
{
    std::multimap<std::string, int> m = {
                                        {"this", 4}, {"that", 2}, 
                                        {"a", 1}, {"that", 3}, {"pen", 3},
                                        {"that", 5}, {"yes", 3}, {"that", 3}
                                    };

    auto lower = m.lower_bound("that");
    auto upper = m.upper_bound("that");

    for (decltype(lower) it = lower; it != upper; ++it)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }

    auto range = m.equal_range("that");

    for (decltype(range.first) it = range.first; it != range.second; ++it)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }

    auto _lower = m.lower_bound("those");
    auto _upper = m.upper_bound("those");
    auto _range = m.equal_range("those");

    std::cout << (_lower == _upper) << std::endl;
    std::cout << (_range.first == _range.second) << std::endl;
    std::cout << (_range.first == m.cend()) << std::endl;
}
