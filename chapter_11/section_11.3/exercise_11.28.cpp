#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, int> m = {{"this", 4}, {"is", 2}, {"a", 1}, {"pen", 3}};

    std::map<std::string, int>::iterator it = m.find("is");
    std::map<std::string, int>::iterator it2 = m.find("is");

    std::cout << it->first << " " << it->second << std::endl;

    std::cout << (it2 == m.end()) << std::endl;
}
