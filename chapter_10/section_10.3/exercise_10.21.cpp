#include <iostream>

int main()
{
    int n = 7;
    auto f = [n] () mutable -> bool
             {
                while (n)
                {
                    --n;
                }

                return (n == 0);
             };

    std::cout << f() << std::endl;

    //Moophy
    auto check_and_decrement = [&n]() { return n > 0 ? !(--n) : !n; };
    std::cout << "ex10.21: ";
    while(!check_and_decrement())
        std::cout << n << " ";
    std::cout << n << std::endl;
}
