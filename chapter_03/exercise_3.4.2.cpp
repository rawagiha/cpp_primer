#include <iostream>
#include <string>

void print_longer(std::string& str)
{
    std::cout << "the longer string is " << str << std::endl;
}

int main()
{
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    
    std::string::size_type len1 = str1.size();
    auto len2 = str2.size();

    if (len1 == len2)
    {
        std::cout << "equal length" << std::endl;
    }
    else if (len1 < len2)
    {
        print_longer(str2);
    }
    else
    {
        print_longer(str1);
    }
}
