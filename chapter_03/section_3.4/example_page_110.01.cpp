#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> vec = {"this is a pen", " a ", " ", "-", "", "the end"};

    for (auto it = vec.cbegin(); 
         it != vec.cend() && !it->empty(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
