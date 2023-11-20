#include <iostream>
#include <string>
#include <cstring>

int compare_strs(const std::string& str1, const std::string& str2)
{
    if (str1 == str2) return 0;
    else if (str1 < str2) return -1;
    else return 1;
}

int main()
{
    std::string str1, str2;
    std::cin >> str1;
    std::cin >> str2;

    const char* ca1 = str1.c_str();
    const char* ca2 = str2.c_str();

    std::cout << compare_strs(str1, str2) << std::endl;

    std::cout << strcmp(ca1, ca2) << std::endl;

}
