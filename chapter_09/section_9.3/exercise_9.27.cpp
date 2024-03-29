#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while (curr != flst.end())
    {
        if(*curr % 2)
            curr = flst.erase_after(prev);
        else
        {
            prev = curr;
            ++curr;
        }
    }

    for (const auto& elem : flst)
        std::cout << elem << std::endl;
}
