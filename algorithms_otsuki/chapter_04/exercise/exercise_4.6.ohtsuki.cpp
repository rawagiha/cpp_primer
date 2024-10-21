#include <vector>
#include <iostream>
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
    for (auto e : v) std::cout << e << ", ";
    std::cout << std::endl;
}

int func(
    int i, int w, const std::vector<int>& a, std::vector<std::vector<int>>& memo)
{
    //base case
    if (i == 0)
    {
        if (w == 0) return 1;
        else return 0;
    }

    if (memo[i][w] != -1) return memo[i][w];
    
    if (func(i - 1, w, a, memo)) return memo[i][w] = 1;

    if (func(i - 1, w - a[i - 1], a, memo)) return memo[i][w] = 1;
    
    return memo[i][w] = 0;
}


int main()
{
    int N, W;
    std::cin >> N >> W;
    
    std::vector<int> a(N);
    fill_vector(a);

    std::vector<std::vector<int>> memo;
    memo.assign(N + 1, std::vector<int>(W + 1, -1));

    show(a);

    std::cout << func(N, W, a, memo) << std::endl; 
}
