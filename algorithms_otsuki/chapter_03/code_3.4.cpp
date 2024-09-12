#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <limits>


const int INT_MAX = std::numeric_limits<int>::max();

std::random_device engine;
std::uniform_int_distribution<int> dist {1, 10000};
void fill_vector(std::vector<int>& v)
{
    auto gen = [&](){ return dist(engine); };
    std::generate(v.begin(), v.end(), gen);
}


void show(const std::vector<int>& v)
{
    for (auto e : v)
        std::cout << e << ",";
    std::cout << std::endl;
}


int main()
{
    int n, K;

    std::cin >> n >> K;
    
    if (!std::cin) 
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n), b(n);
    fill_vector(a);
    fill_vector(b);
    
    int min_val = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {   
            if (a[i] + b[j] < K) continue;
            
            if (a[i] + b[j] < min_val)
            {
                min_val = a[i] + b[j];
            }
        }
    }
    
    std::cout << "mininum is " << min_val << std::endl;

    return 0;
}
