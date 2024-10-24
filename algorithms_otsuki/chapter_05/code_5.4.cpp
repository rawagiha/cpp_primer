#include <iostream>
#include <vector>
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


template<typename T> void choose_min(T& a, T b)
{
    if (a > b) a = b;
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
    
    for (int i = 0; i < N; ++i)
    { 
        if (i + 1 < N)
            choose_min(memo[i + i], memo[i] + std::abs(h[i + 1] - h[i]));
        
        if (i + 2 < N)
            choose_min(memo[i + 2], memo[i] + std::abs(h[i + 2] - h[i]));
    }


    std::cout << memo[N - 1] << std::endl;
}
