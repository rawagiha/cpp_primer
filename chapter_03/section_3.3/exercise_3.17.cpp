#include <iostream>
#include <vector>
#include <string>
#include <cctype>


void to_upper(std::string& str)
{
    for (auto& c : str)
        c = std::toupper(c);
}

int main()
{
    std::string word;
    std::vector<std::string> vec;

    while(std::cin >> word)
    {
        vec.push_back(word);
    }

    int i = 1;
    for (auto& elem : vec)
    {
        to_upper(elem);
        std::cout << elem;
        
        if (i % 8)
        {
            std::cout << " ";
        } 
        else
        {
            std::cout << "\n";
        }

        ++i;
    }

    std::cout << std::endl;
}
