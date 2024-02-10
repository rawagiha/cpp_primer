#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::map<std::string, size_t> word_cnt;
    std::vector<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                                        "the", "but", "and", "or", "an", "a"};

    std::string word;
    while (std::cin >> word)
    {
        if (std::find(exclude.begin(), exclude.end(), word) == exclude.end())
        {
            ++word_cnt[word];
        }
    }

    for (const auto& elem : word_cnt)
        std::cout << elem.first << " occurs " << elem.second
                  << ((elem.second > 1) ? " times" : " time") << std::endl;
}
