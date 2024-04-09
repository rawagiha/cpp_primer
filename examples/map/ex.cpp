#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, int> m = {{"this", 4}, {"is", 2}};

    auto a = m["this"];
    a = 6;
    std::cout << m["this"] << std::endl;

    auto& b = m["this"];
    b = 6;
    std::cout << m["this"] << std::endl;

    m["this"] = 4;
    std::cout << m["this"] << std::endl; 
}

