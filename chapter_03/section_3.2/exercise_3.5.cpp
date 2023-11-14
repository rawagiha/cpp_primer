#include <iostream>
#include <string>


int main()
{
    std::string input, res;
    while (std::getline(std::cin, input))
    {
        res += input;
    }

    std::cout << res << std::endl;
}
