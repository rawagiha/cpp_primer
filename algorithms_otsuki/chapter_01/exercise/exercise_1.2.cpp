#include <iostream>
#include <numeric>
#include <vector>

bool is_satiffied(const int i, const int j, const int k)
{
    if (!k) return false;
    
    int a = (20 + i) * j;
    
    //tens digit of a must be 3
    if ((a / 10) % 10 != 3) return false;

    int b = (20 + i) * (k * 10);

    if ((b < 100) || (b > 999)) return false;

    int c = a + b;
    
    if (c > 999) return false;
    
    if ((c / 10) % 10 != 4) return false;
}

void show(const int i, const int j, const int k)
{
    std::cout << " " << 2 << i << std::endl;
    std::cout << "x" << k << j << std::endl;
    std::cout << "---" << std::endl;
    std::cout << (20 + i) * j << std::endl;
    std::cout << (20 + i) * (k * 10) << std::endl;
    std::cout <<  "---" << std::endl;
    std::cout <<  (20 + i) * j + (20 + i) * (k * 10) << std::endl;
}

int main()
{
    std::vector<int> numbers(10);
    std::iota(numbers.begin(), numbers.end(), 0);

    //brute force solution
    for (int i : numbers)
    {
        for (int j : numbers)
        {
            for (int k : numbers)
            {
                if (is_satiffied(i, j, k))
                    show(i, j, k);
            }
        }
    }
}

