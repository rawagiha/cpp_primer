#include <iostream>
#include <string>
#include <map> 

int main()
{
    std::map<std::string, size_t> word_count;
    
    std::string word;
    while (std::cin >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++((ret.first)->second);
    }

    for (auto& elem : word_count)
    {
        std::cout << elem.first << " " << elem.second << std::endl;
    }
}
