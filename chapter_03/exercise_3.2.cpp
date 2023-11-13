#include <iostream>
#include <string>

int main()
{
    std::string line;
    std::getline(std::cin, line);
    std::cout << line << std::endl;

    std::string word;
    std::cin >> word;
    std::cout << word << std::endl;
}
