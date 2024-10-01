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

void divide_by_two(std::vector<int>& v, size_t& cnt)
{
    show(v);
    std::cout << "current step: " << cnt << "-th" << std::endl;

    for (size_t i = 0; i < v.size(); ++i)
    {
        if (v[i] % 2)
        {
            ++cnt;
            return;
        }
        
        v[i] = v[i] / 2;
    }

    divide_by_two(v, ++cnt);
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
    
    size_t cnt = 0;
    divide_by_two(a, cnt);
    
    std::cout << "done in " << cnt << " steps." << std::endl; 
    return 0;
}
