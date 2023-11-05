#include <iostream>
int main()
{
    std::cout << "declaration = specify type and name" << std::endl;
    std::cout << "definition = declaration + allocate memory + may provide the initial value\n"
              << "definition is also a declaration." << std::endl;    
    std::cout << "extern int ix = 1042; \n is a definition." << std::endl;
    std::cout << "int iy; \n is a definition" << std::endl;
    std::cout << "extern int iz; \n is a declarationi and is not a definition." << std::endl;
}
