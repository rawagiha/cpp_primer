#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<char> v = {'T', 'h', 'i', 's', 'i', 's', 'a', 'p', 'e', 'n'};

    std::string s(v.cbegin(), v.cend());

    std::cout << s << std::endl;
}
