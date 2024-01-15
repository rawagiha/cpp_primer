#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


void f1(const std::string& s)
{
    const std::string numerics("0123456789");
    const std::string alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    std::vector<std::string::size_type> pos, _pos;
    for (std::string::size_type i = 0; i < s.size(); /**/)
    {
        i = s.find_first_of(numerics, i);
        if (i != std::string::npos)
        {    
            pos.push_back(i);
            ++i;
        }
    }

    for (std::string::size_type i = 0; i < s.size(); /**/)
    {
        i = s.find_first_of(alpha, i);
        if (i != std::string::npos)
        {
            _pos.push_back(i);
            ++i;
        }
    }
    
    std::cout << "numeric indexes: ";
    for (const auto elem : pos)
        std::cout << elem << ", ";
    std::cout << std::endl;
    
    std::cout << "alphabet indexes: ";
    for (const auto elem : _pos)
        std::cout << elem << ", ";
    std::cout << std::endl;
}

int main()
{
    f1("ab2c3d7R4E6");
    f1("2abe3dR746E");
}
