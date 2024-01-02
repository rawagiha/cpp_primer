#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::vector<std::string> vec;

    std::ifstream in("input.txt");
    if (in)
    {
        std::string line;
        while(std::getline(in, line))
        {
            vec.push_back(line);
        }
    }

    for (const auto& elem : vec)
        std::cout << elem << std::endl;
}
