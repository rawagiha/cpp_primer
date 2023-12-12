#include <iostream>

void print(const int (&ia)[10])
{
    for (size_t i = 0; i != 10; ++i)
    {
        std::cout << ia[i] << std::endl;
    }
}

int main()
{
    int ia[10] = {5, 6, 1, 3, 4, 9, 9, 0, 8, 2};

    print(ia);
}
