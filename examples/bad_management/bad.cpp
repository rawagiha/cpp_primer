#include <iostream>

struct X
{
    ~X() { std::cout << "destroyed" << std::endl; }
};

int main()
{
    X x;
    X* p = &x;

    //delete p; disaster
}
