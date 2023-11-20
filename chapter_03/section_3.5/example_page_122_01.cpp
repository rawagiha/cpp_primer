#include <iostream>

int main()
{
    char* nlp = nullptr;
    //crash
    //std::

    
    
    //c-str = null terminated
    char ca[] = "c++"; // {'c', '+', '+', '\0'}
    
    char ca2[] = {'c', '+', '+'}; //not null-terminated
    
    char ca3 = '\0';
    char* p = &ca3;
    
    if (!p)
    {
        std::cout << static_cast<void*>(p) << std::endl;
    }

    char* pp = &ca[0];
    std::cout << pp << std::endl;

    for (auto& c : ca)
    {
        std::cout << c << " " << static_cast<void*>(&c) << std::endl;
    }

    for (auto& c : ca2)
        std::cout << c << std::endl;
}
