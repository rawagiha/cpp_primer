#include <iostream>
#include <string>
#include <sstream>

std::istream& print(std::istream& is)
{
    std::string line;
    while (is >> line)
    {
        std::cout << line << std::endl;       
    }
    
    is.clear();

    return is;
}

int main()
{
    std::istringstream is("this is a pen");
    print(is);
}
