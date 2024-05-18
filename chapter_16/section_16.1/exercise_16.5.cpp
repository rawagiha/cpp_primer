#include <iostream>

template <typename T, unsigned N>
void print(const T (&arr)[N])
{
    for (size_t i = 0; i != N; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}


int main()
{
    int ia[] = { 0, 2 ,4, 5 };

    print(ia);

    char ib[] = { 't', 'h', 'I', 'S', 'a', 'P', 'e', 'N' };

    print(ib);
}

