#include <iostream>

int main()
{
    const char* cp = "Hello World";
    if (cp && *cp)
    {
        //point to the first elem
        std::cout << *cp << std::endl;
        std::cout << &cp[0] << std::endl;
        std::cout << static_cast<const void*>(&cp[0]) << std::endl;
        std::cout << cp << std::endl;
    }
}
