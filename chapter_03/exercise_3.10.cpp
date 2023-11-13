#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    for (auto& c : s)
    {
        if (std::ispunct(c)) c = '\0';
    }

    std::cout << s << std::endl;
}
