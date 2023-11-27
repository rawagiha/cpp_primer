#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0, 1, 2, -3, 4};
    auto pbeg = v.begin();

    while (pbeg != v.end() && *pbeg >= 0)
    {
        // *(pbeg++) -> deref the orig and then + 1  
        std::cout << *pbeg++ << std::endl;
    }

    pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
    {
        //*(++pbeg) -> deref the next 
        //first elem skipped, prints out -3 
        //UB if no non-negative value
        std::cout << *++pbeg << std::endl;
    }
}
