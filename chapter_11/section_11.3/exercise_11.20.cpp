#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, size_t> word_cnt;
    std::string word;

    while (std::cin >> word)
    {
        auto ret = word_cnt.insert({word, 1});
        if (!ret.second)
            ++((ret.first)->second);
    }

   for (const auto& w : word_cnt)
       std::cout << w.first << " occurs " << w.second
                 << ((w.second > 1) ? " times" : "time") << std::endl;
}
