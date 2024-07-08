#include <string>
#include <iostream>

int main()
{
    std::string s1{"this is a pen."};
    std::cout << s1 << std::endl; 

    std::string s2{std::move(s1)};
    std::cout << s2 << std::endl;

    std::cout << "What is in s1? " << s1 << std::endl;
}
