#include <string>
#include <iostream>

std::string f1(std::string& name, const std::string& prefix, const std::string& suffix)
{
    auto it = name.begin();
    name.insert(it, prefix.begin(), prefix.end());
    return name.append(suffix);
}

int main()
{
    std::string name = "Kinsan Ginsan";

    std::cout << f1(name, "Ms. ", " 100") << std::endl;
}
