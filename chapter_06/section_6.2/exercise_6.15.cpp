#include <iostream>
#include <string>

std::string::size_type find_char(const std::string& s, char c,
                                std::string::size_type& occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
            {
                ret = i;
            }
            ++occurs;
        }
    }

    return ret;
}


int main()
{
    std::cout << "Enter a strint to be searched:" << std::endl;
    std::string s;
    std::getline(std::cin, s);

    std::cout << "Enter a char to search: " << std::endl;
    char c;
    std::cin >> c;
     
    std::string::size_type occurs;
    auto i = find_char(s, c, occurs);

    if (i == s.size())
    {
        std::cout << c << " was not found..." << std::endl;
    }
    else
    {
        std::cout << "First found at " << i << "-th and occurred " 
                  << occurs << " times" << std::endl;
    }   
}
