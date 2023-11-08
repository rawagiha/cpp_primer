#include <iostream>

int main()
{
    //a)
    //int i, *const cp; const pointer must be initialized

    //b)
    //int *p1, *const p2; same as a)

    //c)
    //const int ic, &r = ic; const int must be initialized

    //d
    //const int *const p; same as a) const int must be initialized

    //e)
    const int *p; //ok a pointer to a const int

    const int a = 78;
    p = &a;
    std::cout << p << std::endl;

    const int b = 65;
    p = &b;
    std::cout << p << std::endl;
}
