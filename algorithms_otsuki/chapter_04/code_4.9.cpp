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

bool func(int i, int w, const std::vector<int>& a)
{
    if (i == 0)
    {
        if (w == 0) return true;
        else return false;
    }

    if (func(i - 1, w, a)) return true;

    if (func(i - 1, w - a[i - 1], a)) return true;

    return false;
}


int main()
{ 
    int n, w;
    std::cin >> n >> w;

    std::vector<int> a(n);

    fill_vector(a);
    
    if (func(n, w, a)) std::cout << "yes" << std::endl;
    else std::cout << "no" << std::endl;

    show(a);
}

