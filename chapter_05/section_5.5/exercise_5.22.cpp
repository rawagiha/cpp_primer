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
    
    int sz = 0;
    do
    {
        sz = get_size();
        ++i;    
    }
    while (sz <= 0);

    std::cout << "After " << i << " trials, I got a positive size: " << sz << std::endl;
}  
