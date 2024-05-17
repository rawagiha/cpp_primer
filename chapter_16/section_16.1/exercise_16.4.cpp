#include <iostream>
#include <string>
#include <vector>
#include <list>

template <typename T, typename U> 
T _find(T start, const T end, const U& target)
{
    while (start != end)
    {
        if (*start == target) return start;
        start = std::next(start, 1);
    }
    
    return end;
}

int main()
{
    std::vector<int> v{4, 2, 42, 6, 1, 7};

    auto it1 = _find(v.begin(), v.end(), 6);
    std::cout << std::distance(v.begin(), it1) << std::endl;
    
    auto it2 = _find(v.begin(), v.end(), 9);
    std::cout << std::distance(v.begin(), it2) << std::endl;
    
    std::list<std::string> sv{"this", "is", "a" ,"pen."};

    std::string target_str{"is"};
    auto it3 = _find(sv.begin(), sv.end(), target_str);
    std::cout << std::distance(sv.begin(), it3) << std::endl;

    target_str = "that";
    auto it4 = _find(sv.begin(), sv.end(), target_str);
    std::cout << std::distance(sv.begin(), it4) << std::endl;
}
