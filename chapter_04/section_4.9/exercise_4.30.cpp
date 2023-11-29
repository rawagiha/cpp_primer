#include <iostream>
#include <vector>
#include <string>
struct S
{
    std::vector<int> mem ={9, 8, 7};
};

double f()
{
    return 9.99;
}

int main()
{
    int x, y;
    std::cout << sizeof x + y << " " << sizeof(x + y) << std::endl;

    S s;
    S* p;
    std::cout << sizeof p->mem[1] << " " << sizeof((p->mem)[1]) << std::endl;
    
    int a = 3, b = 2;
    std::cout << (sizeof a < b) << " " << (sizeof(a) < b) << std::endl;

    std::cout << sizeof f() << " " << sizeof(f()) << std::endl;
}
