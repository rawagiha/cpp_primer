#include <iostream>
#include <string>

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
    print(std::cin);
}
