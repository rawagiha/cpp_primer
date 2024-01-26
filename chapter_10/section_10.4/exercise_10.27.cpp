#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


int main()
{
    std::vector<int> v{8, 2, 1, 3, 2, 3, 8};
    std::list<int> lst;
    
    std::sort(v.begin(), v.end());
    std::unique_copy(v.cbegin(), v.cend(), std::back_inserter(lst));

    for (const auto elem : lst)
        std::cout << elem << std::endl;
}
