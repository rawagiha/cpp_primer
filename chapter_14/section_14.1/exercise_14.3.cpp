#include <vector>
#include <string>
#include <iostream>

int main()
{
    // == version from str -> c-str??
    std::cout << ("cobble" == "stone") << std::endl;

    std::vector<std::string> svec1{"cobble"};
    std::vector<std::string> svec2{"stone"};

    // == version from str
    std::cout << (svec1[0] == svec2[0]) << std::endl;
    
    // == version from vector
    std::cout << (svec1 == svec2) << std::endl;
    
    //== version from str
    std::cout << ("stone" == svec2[0]) << std::endl;
}
