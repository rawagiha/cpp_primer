#include <string>
#include <iostream>

std::string f1(std::string& name, const std::string& prefix, const std::string& suffix)
{
    name.insert(0, prefix);
    return name.insert(name.size(), suffix);
}

int main()
{
    std::string name = "Kinsan Ginsan";

    std::cout << f1(name, "Ms. ", " 100") << std::endl;
}
