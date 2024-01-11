#include <forward_list>
#include <string>
#include <iostream>


void ex_9_28(std::forward_list<std::string>& flst, const std::string& fstr, const std::string& sstr)
{
    auto it = flst.cbegin();
    while (it != flst.cend())
    {
        if (*it == fstr) break;
        ++it;
    }

    if (it != flst.cend())
    {
        flst.insert_after(it, sstr);
    }
    else
    {
        auto _it = flst.before_begin();
        for (const auto& elem : flst) ++_it;
        flst.insert_after(_it, sstr);
    }
}

void show(const std::forward_list<std::string>& flst)
{
    for (auto& elem : flst)
        std::cout << elem << std::endl;
}

int main()
{
    std::forward_list<std::string> flst = {"this", "is", "a", "pen"};

    ex_9_28(flst, "is", "trout");
    show(flst);
    std::cout << std::endl;

    ex_9_28(flst, "salmon", "bream");
    show(flst);
   
}
