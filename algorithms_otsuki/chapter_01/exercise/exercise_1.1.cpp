#include <random>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>


size_t get_random_idx(const int data_len)
{
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<std::size_t> dist(0, data_len - 1);
    
    return dist(gen);
}

void show(
    std::vector<int>::iterator low,
    std::vector<int>::iterator hi
)
{
    for (auto it = low; it <= hi; ++it) 
        std::cout << *it << ",";
    std::cout << std::endl;
}

int main()
{
    const int age_range = 16;
    const int min_age = 20;

    std::vector<int> possible_ages(age_range);
    std::iota(possible_ages.begin(), possible_ages.end(), min_age);
    
    const int truth = possible_ages[get_random_idx(age_range)]; 

    int i = 0;
    auto low = possible_ages.begin();
    auto hi = possible_ages.end() - 1;
    
    std::cout << "initial:" << std::endl;
    show(low, hi);
    
    while (hi > low)
    {
        int mid = *low + (*hi - *low) / 2;

        if (truth <= mid)
        {
            hi = low + (mid - *low);
        }
        else
        {
            low += (mid - *low + 1);
        }

        ++i;

        std::cout << "step " << i << ":" << std::endl;;
        show(low, hi);
    }

    if (truth == *low)
    {
        std::cout << "truth was " << *low 
                  << " and was found in " 
                  << i << " steps" << std::endl;
    }
    
} 
