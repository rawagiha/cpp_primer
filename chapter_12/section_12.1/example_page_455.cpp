#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::vector<std::string> v1;

    //new scope
    {
        std::vector<std::string> v2 = {"a", "an", "the"};
        v1 = v2;
    } // out of scope, v2 destroyed

    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
    {
        // the data from v2 still exists
        std::cout << *it << std::endl;
    }
}
