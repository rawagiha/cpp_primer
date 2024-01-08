#include <vector>
#include <list>
#include <iostream>

bool is_identical(const std::vector<int>& a, const std::list<int>& b)
{
    if (a.size() != b.size()) return false;
    
    if (a.size())
    { 
        auto ai = a.cbegin();
        auto bi = b.cbegin();
        while (ai != a.cend())
        {
            if (*ai != *bi) return false;
            ++ai;
            ++bi; 
        }
        
        return true;
    }

    return true;

}

int main()
{
    std::vector<int> a = {1, 2, 3};
    std::list<int> b = {2, 1, 3}, c = {1, 2, 3};
    std::cout << is_identical(a, b) << std::endl;
    std::cout << is_identical(a, c) << std::endl;
    
    std::vector<int> d;
    std::list<int> e;
    std::cout << is_identical(d, e) << std::endl;
}
