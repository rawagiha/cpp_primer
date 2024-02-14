#include <map>
#include <string>
#include <vector>
#include <iostream>


int main()
{
    std::map<std::string, size_t> m = {{"this", 1}, {"is", 1}, {"a", 1}, {"pen", 1}};

    for (auto it = m.begin(); it != m.end(); ++it)
    {
        it->second = (it->first).size();
    }

    std::vector<std::string> v = {"this", "is", "a", "pen"};

    for (auto it = v.cbegin(); it != v.cend(); ++it)
    {
        std::cout << m[*it] << std::endl;
    }
}
