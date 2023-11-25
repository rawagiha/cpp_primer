#include <iostream>

bool eval_a(bool a)
{
    std::cout << "a!" << std::endl;
    return a;    
}

bool eval_b(bool b)
{
    std::cout << "b!" << std::endl;
    return b;
}


int main()
{
    if (eval_a(true) && eval_b(false));
    if (eval_a(false) && eval_b(true));
    if (eval_a(false) || eval_b(false));
    if (eval_a(true) || eval_b(true));
}
