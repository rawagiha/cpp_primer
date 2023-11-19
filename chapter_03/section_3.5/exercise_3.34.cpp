#include <iostream>

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6};

    int* p1 = &ia[2];
    int* p2 = &ia[5];

    p1 += p2 - p1;

    std::cout << *p1 << std::endl;
}
