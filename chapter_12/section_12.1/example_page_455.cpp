#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::vector<std::string> v1;

    //new scope
    {
        std::vector<std::string> v2 = {"a", "an", "the"};
        v1 = v2; //elem in v2 are copied to v1
    } // out of scope, v2 (and its elems) destroyed,  

    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
    {
        // these are copied elems (not shared with v2)
        std::cout << *it << std::endl;
    }
}
