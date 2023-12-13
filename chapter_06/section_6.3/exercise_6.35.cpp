#include <iostream>

int factorial(int val)
{
    if (val > 1)
        
        //return factorial(--val) * val; prefix decrement(--) will be evaluated earlier than * !!!!! 
        // -> evaluated as factorial(val -1 -1) * val - 1
        return factorial(val - 1) * val;
    return 1;
}

int main()
{
    int i;
    std::cin >> i;

    std::cout << factorial(i) << std::endl;
}
