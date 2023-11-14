#include <iostream>
#include <string>

void print_larger(std::string& str)
{
    std::cout << "the larger string is " << str << std::endl;
}

int main()
{
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    if (str1 == str2)
    {
        std::cout << "equal strings" << std::endl;
    }
    else if (str1 < str2)
    {
        print_larger(str2);
    }
    else
    {
        print_larger(str1);
    }
}
