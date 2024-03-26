#include <string>
#include <iostream>

int main()
{
    int* p = new int[10];
    delete [] p;

    std::string* pstr = new std::string[5]{"this", "is", "a", "pen", "."};
    for (std::string* q = pstr; q != pstr + 5; ++q)
    {
        std::cout << *q << std::endl;
    }

    delete [] pstr;
}
