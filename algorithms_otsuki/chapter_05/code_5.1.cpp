#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

/*1LL -> one in long long
 * << 60 -> 2^60
 */ 
const long long INF = 1LL << 60;

std::random_device engine;
std::uniform_int_distribution<int> dist {1, 100};
void fill_vector(std::vector<int>& v)
{
    auto gen = [&](){ return dist(engine); };
    std::generate(v.begin(), v.end(), gen);
}

template <typename T>
void show(const std::vector<T>& v)
{
    for (const T i : v)
        std::cout << i << ", ";
    std::cout << std::endl;
}

int main()
{
    int N;
    std::cin >> N;
    if (!std::cin || N < 2) return -1;
    
    std::vector<int> h(N);
    fill_vector(h); 
       
    std::vector<long long> memo(N, INF);
    memo[0] = 0;
    memo[1] = std::abs(h[1] - h[0]);

    for (int i = 2; i < N; ++i)
    {
        int one_step = std::abs(h[i] - h[i - 1]);
        int two_step = std::abs(h[i] - h[i - 2]);

        if (one_step + memo[i - 1] < two_step + memo[i - 2])
            memo[i] = one_step + memo[i - 1];
        else
            memo[i] = two_step + memo[i - 2];
    }
    
    show(h);
    show(memo);
    std::cout << memo[N - 1] << std::endl;
}
