#include <vector>
#include <iostream>
#include <memory>

typedef std::shared_ptr<std::vector<int>> my_type;

my_type alloc_empty_vec()
{
    my_type p = std::make_shared<std::vector<int>>();
    return p;
}

void read_in(my_type p)
{
    int x;
    while(std::cin >> x)
    {
        p->push_back(x);
    }
}

void read_out(const my_type p)
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
    
    return 0;
}
