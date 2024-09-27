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


void show(const std::vector<int>& v)
{
    for (auto e : v)
        std::cout << e << ",";
    std::cout << std::endl;
}


int main()
{
    int n, v;

    std::cin >> n >> v;
    
    if (!std::cin) 
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    fill_vector(a);
     
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == v) 
        {    
            ++cnt;
        }
    }
    
    std::cout << v << " occurred " << cnt << " times." << std::endl;
    show(a);
    
    return 0;
}
