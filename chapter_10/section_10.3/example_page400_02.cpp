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
    std::ostream& os = std::cout;
    char c = ' ';
    std::for_each(v.cbegin(), v.cend(),
                  [&os, c](const std::string& s) { os << s << c; });
    std::cout << std::endl;
}

std::ostream& print(std::ostream& os, const std::string& s, char c)
{
    return os << s << c;
}

void show2(const std::vector<std::string>& v)
{
    std::ostream& os = std::cout;
    char c = ' ';
    std::for_each(v.cbegin(), v.cend(),
                  std::bind(print, std::ref(os), std::placeholders::_1, c));
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> words{"this", "is", "not", "a", "pencil", "but", "a", "pen"};
    
    //std::sort(words.begin(), words.end(), is_shorter);
    
    std::sort(
        words.begin(), words.end(), 
        std::bind(is_shorter, std::placeholders::_2, std::placeholders::_1)
    );
      
    show2(words);   
}
