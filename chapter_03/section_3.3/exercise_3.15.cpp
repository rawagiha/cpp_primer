#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec;
    std::string txt;
    while(std::getline(std::cin, txt))
    {
        vec.push_back(txt);
    }

    for (const auto& elem : vec)
        std::cout << elem << std::endl;
}
