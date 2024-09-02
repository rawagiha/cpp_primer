#include <random>
#include <vector>
#include <iostream>

size_t set_truth()
{
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<std::size_t> dist(0, 99);
    
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


void prep(std::vector<int>& possible_ages, const bool is_even)
{
    for (int i = 0; i < 100; ++i)
    {
        if (is_even) 
        {    
            if (i % 2 == 0) possible_ages.push_back(i);
        }
        else
        {
            if (i % 2)  possible_ages.push_back(i);
        }
    }
}


int main()
{
    const int truth = set_truth();

    std::cout << "truth: " << truth << std::endl;
    
    std::cout << "step 1: is the truth even? " << std::endl;
    
    std::vector<int> possible_ages;
    if (truth % 2) prep(possible_ages, false);
    else prep(possible_ages, true);

    int i = 1;
    auto low = possible_ages.begin();
    auto hi = possible_ages.end() - 1;
    
    show(low, hi);
    
    while (hi > low)
    {
        auto mid = low + (hi - low) / 2;

        if (truth <= *mid)
        {
            hi = mid;
        }
        else
        {
            low = mid + 1;
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
