#include <iostream>
#include <string>

int main()
{
    std::string line;

    while (std::getline(std::cin, line))
    {
        if (!line.empty())
        {
            std::cout << line << std::endl;
        }
        else
        {
            std::cout << "empty input" << std::endl;
        }
    }

    return 0;
}
