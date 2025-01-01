#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

std::random_device engine;
std::uniform_int_distribution<int> dist {1, 20};

void fill_matrix(std::vector<std::vector<int>>& m)
{
    auto gen = [&](){ return dist(engine); };
    
    for (size_t i = 0; i < m.size(); ++i)
    {
        std::generate(m[i].begin(), m[i].end(), gen);
    }
}


size_t get_larger(const std::vector<int>& v, const size_t i)
{
    size_t j = 0, k = 0;
    if (i == 0)
    {
        j = 1;
        k = 2;
    }
    else if (i == 1)
    {
        j = 0;
        k = 2;
    }
    else
    {
        j = 0;
        k = 1;
    }

    if (v[j] < v[k]) return k;
    else return j;
}


int main()
{
    int N;
    std::cin >> N;
    
    std::vector<std::vector<int>> happiness(N, std::vector<int>(3));

    fill_matrix(happiness);
    
    auto i = std::distance(
                happiness[0].begin(), 
                std::max_element(happiness[0].begin(), happiness[0].end())
    );
    
    int total_happniness = happiness[0][i];

    for (size_t n = 1; n < N; ++n)
    {
        i = get_larger(happiness[n], i);
        total_happniness += happiness[n][i];
    } 

    std::cout << total_happniness << std::endl;
}
