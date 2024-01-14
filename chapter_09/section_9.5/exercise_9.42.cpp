#include <iostream>
#include <string>

int main()
{
    std::string s;
    s.reserve(100);
    char c;
    while (std::cin >> c)
    {
        s.push_back(c);
    }

    std::cout << s << std::endl;
}
