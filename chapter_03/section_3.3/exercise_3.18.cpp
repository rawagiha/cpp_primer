#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {0};
    ivec[0] = 42;

    for (const auto& i : ivec) std::cout << i << std::endl;
}
