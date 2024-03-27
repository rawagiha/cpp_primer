#include <iostream>
#include <string>
#include <cstring>

int main()
{
    const char* a = "this is";
    const char* b = " a pen.";
    
    std::cout << strlen(a) << std::endl;  
    size_t n = strlen(a) + strlen(b) + 1; // +1 for null
    char* a_b = new char[n];

    strcpy(a_b, a); 
    strcat(a_b, b);

    for (char* p = a_b; p != a_b + n; ++p)
        std::cout << *p;
    std::cout << std::endl;
    
    const std::string sa("this is");
    const std::string sb(" a pen.");

    std::string sab = sa + sb;

    for (const auto& c : sab)
        std::cout << c;
    std::cout << std::endl;
}
