#include <iostream>
#include <string>

inline bool is_shorter(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::cout << is_shorter("this is a pen", "aa this is not a pen") << std::endl;
}
