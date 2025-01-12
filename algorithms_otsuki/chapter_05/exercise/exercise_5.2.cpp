#include <vector>
#include <random>
#include <iostream>
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
    for (auto& e : v) 
    {
        std::cout << e << " ";
    }
    std::cout << std::endl; 
}


int main()
{
    int W, N;
    std::cin >> W >> N;
    

    std::vector<int> v(N);
    fill_vector(v);
    
    //std::vector<int> v = {1, 5, 1, 9};

    /*vector's indexes represent 0 to W
     * if N (0 <= N <= W) is reached, memo[N] = 1
     * else memo[N] = 0
    */
    std::vector<int> memo(W + 1, 0);

    for (size_t i = 0; i < N; ++i)
    {
        if (v[i] > W) continue;
        
        std::vector<size_t> achieved;
        for (size_t j = 1; j < W + 1; ++j)
        {
            /* memo[i] == 1 -> previously acheived 
               j + v[i] <= W needed, obviously
             */
            if (j + v[i] <= W && memo[j])
            {
                achieved.push_back(j + v[i]);
            }
        }

        for (auto _ : achieved) memo[_] = 1;            
        memo[v[i]] = 1;

    }
   
    show(v);
    show(memo); 
    
    std::cout << memo[W] << std::endl;
}
