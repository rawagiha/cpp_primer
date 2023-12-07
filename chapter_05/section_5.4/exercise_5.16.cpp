#include <iostream>

int main()
{
    std::string text, str;
    while(std::getline(std::cin, str))
    {
        text += str;
    }
    std::cout << text << std::endl;
    
    //loop version
    for (/*null*/; std::getline(std::cin, str); /*null*/) 
        text += str;
    std::cout << text << std::endl;
}
