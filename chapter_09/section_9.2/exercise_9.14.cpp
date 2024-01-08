#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <iterator>

int main()
{
    std::list<const char*> a = {"this is a pen", "beach", "pen pen", "not a pen"};
    std::vector<std::string> b;

    b.assign(++a.begin(), --a.end());

    for (const auto& elem : b)
        std::cout << elem << std::endl;
}
