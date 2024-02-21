#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<std::string, std::string> m = {{"this", "that"}};

    m["these"] = "those";
    m["this"] = "thatthat";

    for (const auto& elem : m)
        std::cout << elem.first << " " << elem.second << std::endl;
}
