#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::string> v = {"1.24", ".4", "7.86", "4.5", "98.5", "3.24", "0.89"};
    double sum = 0.0;
    auto it = v.cbegin();
    while (it != v.cend())
    {
        sum += std::stod(*it);
        ++it;
    }

    std::cout << sum << std::endl;
}
