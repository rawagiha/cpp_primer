#include <iostream>
#include <deque>

int main()
{
    int i;
    std::deque<int> d;
    while (std::cin >> i)
    {
        d.push_back(i);
    }

    for (auto it = d.cbegin(); it != d.cend(); ++it)
    {
        std::cout << *it << std::endl;
    }

}
