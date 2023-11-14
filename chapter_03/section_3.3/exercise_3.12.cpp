#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::vector<int>> ivec;
    //std::vector<std::string> svec = ivec; types are different
    std::vector<std::string> svec(10, "null");
    
    int i = 1;
    for (const auto& elem : svec)
        std::cout << elem << " " << i++ << std::endl;
}
