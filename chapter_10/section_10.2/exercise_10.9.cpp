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

int main()
{
    std::vector<std::string> words{"this", "is", "a", "pen", "and", "this", "is", "not", "a", "pencil"};
    elim_dups(words);
    
    for (const auto& elem : words)
        std::cout << elem << ", ";
    std::cout << std::endl; 
}
