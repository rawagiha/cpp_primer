#include <map>
#include <string>
#include <iostream>
#include <cctype>

void unify(std::string& word)
{
    for (char& ch : word)
    {
        ch = std::tolower(ch);
    }


}

int main()
{
    std::map<std::string, size_t> word_cnt;
    std::string word;

    while (std::cin >> word)
        unify(word);
        std::cout << word << std::endl;
        ++word_cnt[word];

   for (const auto& w : word_cnt)
       std::cout << w.first << " occurs " << w.second
                 << ((w.second > 1) ? " times" : "time") << std::endl;
}
