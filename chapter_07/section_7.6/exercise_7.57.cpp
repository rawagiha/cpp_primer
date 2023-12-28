#include <iostream>
#include "Account.h"

int main()
{
    Account a1, a2;

    std::cout << a1.rate() << std::endl;

    a1.rate(7.67);

    std::cout << a1.rate() << " " << a2.rate() << std::endl;
}
