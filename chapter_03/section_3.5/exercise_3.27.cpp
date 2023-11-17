#include <iostream>

constexpr int txt_size()
{
    return 123;
}

int main()
{
    constexpr unsigned buf_size = 1024;
    int ia[buf_size];

    std::cout << sizeof(ia) / sizeof(int) << std::endl;

    int ib[4 * 7 - 14];
    std::cout << sizeof(ib) / sizeof(int) << std::endl;

    int ic[txt_size()];
    std::cout << sizeof(ic) / sizeof(int) << std::endl;

    char st[12] = "fundamental";

    for (auto& c : st)
        std::cout << c << std::endl;
}
