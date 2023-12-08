#include <iostream>
#include <random>

int get_size()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(-5, 3);
    return dist(rng);
}

int main()
{
    unsigned i = 0;
    
    for (int sz = get_size(); sz <= 0; sz = get_size())
        ++i;

    std::cout << "After " << i << " trials, I got a positive size: " << std::endl;
}  
