#include <iostream>
#include <string>
#include <vector>
#include <functional>

bool check_size(const std::string& s, std::string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    auto check_six = std::bind(check_size, std::placeholders::_1, 6);

    std::string s{"hello"};
    std::string ss{"this is a pen"};

    std::cout << check_six(s) << std::endl;
    std::cout << check_six(ss) << std::endl;
}
