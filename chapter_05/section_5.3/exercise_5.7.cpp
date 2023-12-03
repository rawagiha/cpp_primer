#include <iostream>
#include <random>

int get_value()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0,1);
    
    return dist(rng);
}

int main()
{
    std::cout << "Enter two ints" << std::endl;
    int ival1, ival2, minval = 999, occurs = 0;
    std::cin >> ival1 >> ival2;

    if (ival1 != ival2)
        ival1 = ival2; //; needed
    else
        ival1 = ival2 = 0;

    std::cout << ival1 << " " << ival2 << std::endl;

    if (ival1 < minval)
    {
        minval = ival1;
        ++occurs; 
    }
    std::cout << minval << " " << occurs << std::endl;
    
    int ival = get_value();
    if (ival)
        std::cout << "ival = " << ival << std::endl;

    if (!ival)
        std::cout << "ival = 0\n";
    
    if (ival == 0)
    {
        ival = get_value();
        std::cout << "second ival = " << ival << std::endl;
    }
    
    /*
    int i = 0;
    while (i < 10)
    {
        std::cout << get_value() << std::endl;
        ++i;
    }*/
}
