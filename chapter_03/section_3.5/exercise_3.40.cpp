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


    const char ca1[] = "this is a";
    const char ca2[] = " pen. a?";

    const size_t new_sz = strlen(ca1) + strlen(ca2) + 1;
    char ca3[new_sz];

    strcpy(ca3, ca1);
    strcat(ca3, ca2);

    std::cout << ca3 << std::endl;
    
    int ia[] = {89, 8, 7};
    std::cout << ia << std::endl;
}
