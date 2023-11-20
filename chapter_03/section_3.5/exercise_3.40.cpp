#include <iostream>
#include <cstring>

int main()
{
    char ca[] = {'a', 'b', 'c', '\0'};
    char cb[] = {'d', 'e', 'f', '\0'};

    char cc[7];
    
    strcpy(cc, ca);
    strcat(cc, cb);
    
    char* cp = cc;
    while(*cp)
    {
        std::cout << *cp << std::endl;
        ++cp;
    }
    
    
    for (auto& c : ca)
    {
        std::cout << c;
    }
    std::cout << std::endl;
}
