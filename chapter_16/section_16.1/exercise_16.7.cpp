#include <iostream>
#include <string>

template <typename T, unsigned N>
constexpr size_t sz(T (&arr)[N])
{
    return N;
}

int main()
{
    int ia[] = { 0, 2 ,4, 5 };
    std::cout << sz(ia)<< std::endl;

    std::string sa[] = { "this", "was", "a", "pen", "." };
    std::cout << sz(sa) << std::endl;
}

