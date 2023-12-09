#include <iostream>

//val is a parameter
int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;

    return ret;
}

int main()
{
    // argument 3 is an initializer to the param.
    std::cout << fact(3) << std::endl;
}
