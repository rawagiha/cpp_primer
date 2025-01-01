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



