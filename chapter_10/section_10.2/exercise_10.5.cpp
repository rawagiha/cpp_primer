#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<const char*> v = {"this", "is", "a", "pen"};
    //std::list<const char*> lst = {"this", "was", "a", "pen"};
    std::list<const char*> lst = {"this", "is", "a", "pen"};
    //std::list<const char*> lst = {"this", "a", "pen"};

    //from Moophy
    //std::equal is going to compare the address value rather than the string value
    bool res = std::equal(v.cbegin(), v.cend(), lst.cbegin());

    std::cout << res << std::endl;

    //use string for comparison

    std::vector<std::string> _v = {"this", "is", "a", "pen"};
    std::list<std::string> _lst = {"this", "a", "is", "pen"};

    bool _res = std::equal(v.cbegin(), v.cend(), lst.cbegin());
    
    std::cout << _res << std::endl;
}
