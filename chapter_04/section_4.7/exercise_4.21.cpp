#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {0, 1, 2, 3, 4, 5};

    for (auto& elem : vec)
    {
        elem = (elem % 2) ? elem * 2 : elem;
    }

    for (const auto elem : vec)
    {
        std::cout << elem << std::endl;
    }
}
