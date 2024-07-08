#include "section_13.5.h"
#include <iostream>


int main()
{
    StrVec sv;

    sv.push_back("this");
    sv.push_back(" is ");
    sv.push_back(" a pen.");
    
    sv.reverse();

    for (auto it = sv.begin(); it != sv.end(); ++it)
        std::cout << *it << std::endl;

    StrVec sv2{{"today", "is", "not", "Friday."}};

    sv = sv2;
    sv.reverse();
    for (auto it = sv.begin(); it != sv.end(); ++it)
        std::cout << *it << std::endl;
}
