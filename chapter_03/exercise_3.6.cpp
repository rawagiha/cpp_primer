#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    for (auto& c : s)
    {
        c = std::toupper(c);
    }

    std::cout << s << std::endl;
}
