#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    for (decltype(s.size()) i = 0; 
         i != s.size() && !std::isspace(s[i]); ++i)
    {
        s[i] = std::toupper(s[i]);
    }

    std::cout << s << std::endl;
}
