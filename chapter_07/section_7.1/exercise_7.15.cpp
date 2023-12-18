#include "Person.h"

int main()
{
    Person a;
    
    Person b("aho");

    Person c("aho", "this is a pne");
    
    Person d(std::cin);

    print(std::cout, d) << std::endl;
}

