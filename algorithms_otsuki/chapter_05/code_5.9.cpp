#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

/*1 -> one in int
 * << 20 -> 2^20
 */ 
const int VERYLARGE = 1 << 20;

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


void show_matrix(const std::vector<std::vector<int>>& m)
{
    for (auto col : m)
    {
        for (auto row : col)
        {
            std::cout << row << " ";
        }
        std::cout << std::endl;
    }
}

void choose_smaller(int& i, int j)
{
    if (j < i) i = j;
}

int main()
{
    int N = 0;
    std::cin >> N;
    if (!std::cin || !(N > 0)) 
    {
        std::cout << "invalid input." << std::endl;
        return 1;
    } 

    std::vector<std::vector<int>> m(N + 1, std::vector<int> (N + 1));

    fill_matrix(m);
    show_matrix(m);

    std::vector<int> memo(N + 1, VERYLARGE);
    
    memo[0] = 0;
    for (int i = 1; i < N + 1; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            choose_smaller(memo[i], memo[j] + m[i][j]);
        }
    }

    std::cout << memo[N] << std::endl;
}


