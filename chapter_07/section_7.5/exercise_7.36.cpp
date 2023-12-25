#include <iostream>

struct X
{
    X(int i, int j): base(i), rem(base % j) {}
    //int rem, base; -> initialize rem first by base % j -> base undefined
    int base, rem;  
};

int main()
{
    X x(5, 2);
    std::cout << x.rem << " " << x.base << std::endl;
}
