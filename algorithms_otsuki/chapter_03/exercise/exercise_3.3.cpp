#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

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
    
    if ((!std::cin) && (n > 1))
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    std::vector<int> a(n);
    fill_vector(a);
     
    int first_min = 100000, second_min = 100000;
    for (int i = 0; i < n; ++i)
    {
        if (first_min > a[i]) 
        {    
            second_min = first_min;
            first_min = a[i];
        }
        
        if ((second_min > a[i]) && (a[i] > first_min)) second_min = a[i];
        
    }
    
    std::cout << "min: " << first_min << std::endl;
    std::cout << "second min: " << second_min << std::endl;
    show(a);
    
    return 0;
}
