#include <iostream>
#include <string>

int main()
{
    unsigned int a = 0, e = 0, i = 0, o = 0, u = 0;
    
    /*
    std::string line;
    while(getline(std::cin, line))
    {
        for (const auto& c : line)
        {
            if (c == 'a') ++a;
            else if (c == 'e') ++e;
            else if (c == 'i') ++i;
            else if (c == 'o') ++o;
            else if (c == 'u') ++u;
        }
    }
    */ 
    
    char c;
    while (std::cin >> c)
    {
        if (c == 'a') ++a;
        else if (c == 'e') ++e;
        else if (c == 'i') ++i;
        else if (c == 'o') ++o;
        else if (c == 'u') ++u;
    }
    std::cout << a << " "<< e << " " << i << " " << o << " " << u <<std::endl; 
}
