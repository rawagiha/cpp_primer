#include <list>
#include <string>
#include <algorithm>
#include <iostream>


int main()
{
    std::list<std::string> v = {"this", "is", "a", "pen", "is", "not", "a", "pen"};
    auto cnt = std::count(v.cbegin(), v.cend(), "pen");

    std::cout << cnt << std::endl;
}
