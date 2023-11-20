#include <iostream>

int main()
{
    //const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    const char* cp = ca;
    //runs until *cp hits '\0'
    while(*cp)
    {
        std::cout << *cp << std::endl;
        ++cp;
    }
}
