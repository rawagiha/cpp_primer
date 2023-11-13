#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s = "Hello World!!!!!";

    decltype(s.size()) punct_cnt = 0;

    for (const auto& c : s)
    {
        if (std::ispunct(c)) ++punct_cnt; 
    }

    std::cout << punct_cnt  
              << " punctuation characters in " << s << std::endl;
}
