#include <iostream>
#include <vector>

int main()
{ 
    std::vector<long long> f(50);
    f[0] = 0, f[1] = 1;

    for (int n = 2; n < 50; ++n)
    {
        f[n] = f[n - 1] + f[n - 2];

        std::cout << "f(" << n << ") = " << f[n] << std::endl;
    }
 }

