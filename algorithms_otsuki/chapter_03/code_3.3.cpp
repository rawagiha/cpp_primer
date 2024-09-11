#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <limits>


const int INT_MAX = std::numeric_limits<int>::max();

std::random_device engine;
std::uniform_int_distribution<int> dist {1, 100};
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
    int n;

    std::cin >> n;
    
    if (!std::cin) 
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    fill_vector(a);
    
    int idx = -1;
    int min_val = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < min_val) 
        {   
            min_val = a[i];
            idx = i;
        }
    }
    
    std::cout << "mininum is " << min_val << " at " << idx << std::endl;

    return 0;
}
