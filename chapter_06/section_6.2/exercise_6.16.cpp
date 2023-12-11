#include <iostream>
#include <string>

bool is_empty(const std::string& s)
{
    return s.empty();
}

int main()
{
    std::string s1 = "this is a pen";
    const std::string s2 = "a pen.";

    std::cout << is_empty(s1) << std::endl;
    std::cout << is_empty(s2) << std::endl;
    std::cout << is_empty("") << std::endl;
}
