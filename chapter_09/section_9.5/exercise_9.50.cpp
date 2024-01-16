#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::string> v = {"124", "4", "786", "45", "985", "324", "89"};
    int sum = 0;
    auto it = v.cbegin();
    while (it != v.cend())
    {
        sum += std::stoi(*it);
        ++it;
    }

    std::cout << sum << std::endl;
}
