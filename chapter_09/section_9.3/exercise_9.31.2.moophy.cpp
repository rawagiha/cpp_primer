#include <vector>
#include <list>
#include <forward_list>
#include <iostream>
#include <iterator>

template <typename T>
void show(const T& t)
{
    for (const auto elem : t)
        std::cout << elem << std::endl;
}

int main()
{
    std::forward_list<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = v.begin();
    auto prev = v.before_begin();
    while (iter != v.end())
    {
        if (*iter % 2)
        {
            iter = v.insert_after(prev, *iter); //return iterator to the inserted before the arg
            std::advance(iter, 2);
            std::advance(prev, 2);
        }
        else
        {
            iter = v.erase_after(prev); //after erased
        }
    }

    show(v);
    
}
