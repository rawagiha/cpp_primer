#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>


int main()
{
    std::string line = "FIRST,MIDDLE,LAST";

    auto comma = std::find(line.cbegin(), line.cend(), ',');
    std::cout << std::string(line.cbegin(), comma) << std::endl;

    auto rcomma = std::find(line.crbegin(), line.crend(), ',');
    std::cout << std::string(line.crbegin(), rcomma) << std::endl;

    std::cout << std::string(rcomma.base(), line.cend()) << std::endl;
}
