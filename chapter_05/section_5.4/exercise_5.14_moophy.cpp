#include <iostream>
#include <string>
#include <utility>


int main()
{
    std::pair<std::string, int> max_duplicated;

    int count = 0;
    for (std::string str, prestr; std::cin >> str; prestr = str)
    {
        if (str == prestr) ++count;
        else count = 0;
        if (count > max_duplicated.second) max_duplicated = {prestr, count};
    }

    if (max_duplicated.first.empty()) std::cout << "No duplicated words" << std::endl;
    else std::cout << max_duplicated.first << " " << max_duplicated.second + 1 << std::endl;
}

