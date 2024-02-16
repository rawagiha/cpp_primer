#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

template <typename T>
void show(const T& t)
{
    for (auto it = t.cbegin(); it != t.cend(); ++it)
        std::cout << *it << std::endl;
    std::cout << std::endl;
}


int main()
{
    std::vector<std::string> v = {"this", "is", "a", "pen", "not", "a", "pencil"};
    std::multiset<std::string> c, d;

    std::copy(v.begin(), v.end(), std::inserter(c, c.end()));
    show(c);

    //error -> set does not have  push_back 
    //std::copy(v.begin(), v.end(), std::back_inserter(d));
    //show(d);
    
    std::vector<std::string> u, uu;
    std::copy(c.begin(), c.end(), std::inserter(u, u.end()));
    show(u);

    std::copy(c.begin(), c.end(), std::back_inserter(uu));
    show(uu);
}
