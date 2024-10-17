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

int main()
{
    int N, W;
    std::cin >> N >> W;
    
    std::vector<int> v(N);
    fill_vector(v);
     
    //memorize inteters (0 to W) that have been created
    //true if created
    bool memo[W + 1];
    std::fill_n(memo, W + 1, false);
    memo[0] = true; //zero is already created

    for (int n : v)
    {
        std::vector<int> tmp;
        for (size_t i = 0; i < W + 1; ++i)
        {
            //memo[0] is alreays true -> case only n is used
            //memo[i] true -> add n to a new number
            //memo[i] false -> previously not created. skip
            if (memo[i] && i + n <= W)
            {     
                tmp.push_back(i + n);
            }
        }

        //update memo
        for (auto j : tmp) memo[j] = true;
    }
    
    show(v);
    for (auto u : memo) std::cout << u << ", ";
    std::cout << std::endl;
    std::cout << memo[W] << std::endl;
}
