#include <iostream>
#include <vector>
#include <random>
#include <algorithm>


std::random_device engine;
std::uniform_int_distribution<int> dist {1, 10};
void fill_vector(std::vector<int>& v)
{
    auto gen = [&](){ return dist(engine); };
    std::generate(v.begin(), v.end(), gen);
}

int main()
{
    int N, W;
    
    bool valid = false;
    do
    {
        std::cin >> N >> W;
        if ((std::cin) 
            && (N > 0) 
            && (N < 31) //prevent overflow
            && (W > 0)
        ) valid = true;
        else
        {
            std::cout << "invalid input" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!valid);

    std::vector<int> a(N);
    fill_vector(a);

    std::cout << (1 << N) << std::endl;
     
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit)
    {
        int sum = 0;
        for (int i = 0; i < N; ++i)
        {
            // bit: 010100110
            // i:   000001000 (i = 3)
            if (bit & (1 << i))
            {
                sum += a[i];
            }
        }

        if (sum == W) exist = true;
    }
    
    for (auto e : a)
        std::cout << e << ", ";
    std::cout << std::endl;
    
    if (exist) std::cout << "yes" << std::endl;
    else std::cout << "no" << std::endl;
}
