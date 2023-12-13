#include <iostream>

int factorial(int val)
{
    if (val > 1)
        
        //return factorial(--val) * val; prefix decrement(--) will be evaluated earlier than * !!!!! 
        // -> evaluated as factorial(val -1 -1) * val - 1
        
        /*
         *Page139
         *If you change the value of an operand, don't use that operand elsewhere in the same expression
         *-> undefined
         * BAD -> factorial(--val) * val Prefix-- modifies val
         * Good -> factorial(val - 1) *val
        */
        
        return factorial(val - 1) * val;
    return 1;
}

int main()
{
    int i;
    std::cin >> i;

    std::cout << factorial(i) << std::endl;
}
