#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

void elim_dups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end());
    auto end_uniq = std::unique(words.begin(), words.end());
    words.erase(end_uniq, words.end());
}

bool is_shorter(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}

void elim_dups2(std::vector<std::string>& words)
{
    std::stable_sort(words.begin(), words.end(), is_shorter);
    auto end_uniq = std::unique(words.begin(), words.end());
    words.erase(end_uniq, words.end());
}
int main()
{
    std::vector<std::string> words{"this", "is", "a", "pen", "and", "this", "is", "not", "a", "pencil"};
    elim_dups2(words);
    
    for (const auto& elem : words)
        std::cout << elem << ", ";
    std::cout << std::endl; 
}
