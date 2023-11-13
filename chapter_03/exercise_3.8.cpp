#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    decltype(s.size()) i = 0;
    
    while (i < s.size())
    {
        s[i++] = 'X';
    }

    std::cout << s << std::endl;

    for (i = 0; i < s.size(); s[i++] = 'Y');

    std::cout << s << std::endl;

    return 0;
}
