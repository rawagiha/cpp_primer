#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

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
    int n;

    std::cin >> n;
    
    if ((!std::cin) && (n > 1))
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    fill_vector(a);
     
    int min = 100000, max = -1;
    for (int i = 0; i < n; ++i)
    {
        if (min > a[i]) min = a[i];
        
        if (a[i] > max); max = a[i];
        
    }
    
    std::cout << "max diff: " << max - min << std::endl;
    std::cout << "max: " << max << ", min: " << min << std::endl;
    show(a);
    
    return 0;
}
