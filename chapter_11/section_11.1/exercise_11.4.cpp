#include <map>
#include <string>
#include <iostream>
#include <cctype>

void unify(std::string& word)
{
    for (auto it = word.begin(); it != word.end(); ++it)
    {
        *it = std::tolower(*it);
        
        //std::next does not move iterator, just returns the next value
        if (std::ispunct(*it) && std::next(it) == word.end() )
        {
            word.erase(it, word.end());
            break;
        }
    }

}

int main()
{
    std::map<std::string, size_t> word_cnt;
    std::string word;

    while (std::cin >> word)
    {     
        unify(word);
        ++word_cnt[word];
    }

   for (const auto& w : word_cnt)
       std::cout << w.first << " occurs " << w.second
                 << ((w.second > 1) ? " times" : " time") << std::endl;
}
