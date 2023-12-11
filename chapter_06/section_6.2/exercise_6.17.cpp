#include <iostream>
#include <string>
#include <cctype>

bool has_capital(const std::string& s)
{
    for (const auto& c : s)
    {
        if (std::isupper(c)) return true;
    }
    return false;
} 

void to_lowercase(std::string& s)
{
    for (auto& c : s)
    {
        c = std::tolower(c);
    }
}


int main()
{
    std::string s = "hisT Is A PnEgG.";
    std::cout << has_capital(s) << std::endl;

    std::cout << has_capital("this is a pen") << std::endl;
    
    to_lowercase(s);
    std::cout << s << std::endl; 
}
