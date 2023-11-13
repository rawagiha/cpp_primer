#include <iostream>
#include <string>

int main()
{
    std::string s;
    
    if (s.size())
    {
        std::cout << s[0] << std::endl;
    }
    else
    {
        std::cout << "s[0] is not within range" << std::endl;
    }
}
