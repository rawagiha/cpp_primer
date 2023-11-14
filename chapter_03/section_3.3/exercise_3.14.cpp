#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> vec;
    int i = 0;
    while(std::cin >> i)
    {
        vec.push_back(i);
    }

    for (const auto& elem : vec)
        std::cout << elem << std::endl;
}
