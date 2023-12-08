#include <iostream>
#include <random>

int get_response()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 1);
    return dist(rng);
} 

int main()
{
    do
    {
        int v1, v2;
        std::cout << "Please enter two numbers to sum:";
        if (std::cin >> v1 >> v2)
            std::cout << "Sum is: " << v1 + v2 << std::endl;
    }
    while (std::cin); // continue if prev. input was valid
    
    /*
    do
    {
    }
    while (int val = get_response()) definition not allowed in condition
    */

    int ival;
    do
    {
        //int ival = get_response(); not visible from the condition
        ival = get_response();
        if (ival) std::cout << "next loop will happen\n";
        else std::cout << "will terminate\n";    
    }
    while (ival);
}
