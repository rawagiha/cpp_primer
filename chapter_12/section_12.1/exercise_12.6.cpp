#include <vector>
#include <iostream>

std::vector<int>* alloc_empty_vec()
{
    std::vector<int>* p = new std::vector<int>();
    return p;
}

void read_in(std::vector<int>* p)
{
    int x;
    while(std::cin >> x)
    {
        p->push_back(x);
    }
}

void read_out(const std::vector<int>* p)
{
    for (auto it = p->cbegin(); it != p->cend(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

int main()
{
    auto p = alloc_empty_vec();
    read_in(p);
    read_out(p);

    delete p;

    return 0;
}
