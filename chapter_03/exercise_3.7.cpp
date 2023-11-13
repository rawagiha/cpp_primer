#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    for (char c : s) // each c is copied from s
    {
        c = std::toupper(c); //copied obj Upper but not the orig obj
    }

    std::cout << s << std::endl; // the original s no change
}
