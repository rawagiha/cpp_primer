#include <vector>
#include <iostream>


template <typename T>
void choose_max(T& a, T b)
{
    if (a < b) a = b;
}


int main()
{
    const std::vector<int> weights = {2, 1, 3, 2, 1, 5};
    const std::vector<int> values = {3, 2, 6, 1, 3, 85};
   
    const int N = static_cast<int>(weights.size());
    const int W = 15; 

    std::vector<std::vector<int>> memo(N + 1, std::vector<int>(W + 1, 0));

    for (int i = 0; i < N; ++i)
    {
        for (int w = 0; w <= W; ++w)
        {
            if (w - weights[i] >= 0)
            {
                choose_max(memo[i + 1][w], memo[i][w - weights[i]] + values[i]);
            }

            choose_max(memo[i + 1][w], memo[i][w]);
        }
    }

    std::cout << memo[N][W] << std::endl;
}
