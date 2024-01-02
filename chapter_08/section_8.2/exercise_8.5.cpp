#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::vector<std::string> vec;

    std::ifstream in("input.txt");
    if (in)
    {
        std::string buff;
        while(in >> buff)
        {
            vec.push_back(buff);
        }
    }

    for (const auto& elem : vec)
        std::cout << elem << std::endl;
}
