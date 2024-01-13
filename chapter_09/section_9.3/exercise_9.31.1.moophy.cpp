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
    std::list<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = v.begin();
    while (iter != v.end())
    {
        if (*iter % 2)
        {
            iter = v.insert(iter, *iter); //return iterator to the inserted before the arg
            std::advance(iter, 2);
        }
        else
        {
            iter = v.erase(iter); //after erased
        }
    }

    show(v);
    
}
