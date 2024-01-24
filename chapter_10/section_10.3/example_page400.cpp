#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

bool is_shorter(const std::string& s, const std::string& t)
{
    return s.size() < t.size();
}

void show(const std::vector<std::string>& v)
{
    for (const auto& elem : v)
        std::cout << elem << std::endl;
}

int main()
{
    std::vector<std::string> words{"this", "is", "not", "a", "pencil", "but", "a", "pen"};
    
    //std::sort(words.begin(), words.end(), is_shorter);
    
    std::sort(
        words.begin(), words.end(), 
        std::bind(is_shorter, std::placeholders::_2, std::placeholders::_1)
    );
      
    show(words);   
}
