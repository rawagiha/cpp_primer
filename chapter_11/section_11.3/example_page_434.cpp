#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<std::string, size_t> m = {{"this", 4}, {"is", 2}, {"a", 1}};
    
    size_t n1 = m.erase("this");
    
    std::cout << n1 << std::endl;   

    size_t n2 = m.erase("this");

    std::cout << n2 << std::endl;

    std::multimap<std::string, size_t> mm;

    mm.insert({"this", 4});
    mm.insert({"this", 5});
    mm.insert({"that", 3});
    mm.insert({"this", 4});
    mm.insert({"it", 5});

    size_t n3 = mm.erase("this");

    std::cout << n3 << std::endl;

    for (const auto& elem : mm)
        std::cout << elem.first << " " << elem.second << std::endl;
}
