#include "str_vec.h"


StrVec make_it(std::istream& in)
{
    std::string s;
    in >> s;
    StrVec sv{s};
    
    std::cout << "going to return" << std::endl; 
    return sv;
}

void show(const StrVec& sv)
{
    std::cout << std::endl;
    for (auto it = sv.begin(); it != sv.end(); ++it)
         std::cout << *it << ", ";
    std::cout << std::endl;
    std::cout << std::endl;
}

void is_same(const StrVec& lhs, const StrVec& rhs)
{
    if (lhs == rhs)
    {
        std::cout << "same" << std::endl;
    }
    else
    {
        std::cout << "not same" << std::endl;
    }
}

int main()
{
    StrVec sv;
   
    sv.push_back("this");
    sv.push_back(" is ");
    sv.push_back(" a pen.");
     
    StrVec ssv(sv);
      
    sv.reverse();
    show(sv);
    
    StrVec sv2{{"today", "is", "not", "Friday."}};
       
    is_same(sv, sv2);  
    
    
    StrVec sssv{{"this", " is ", " a pen."}};
    is_same(ssv, sssv);

    sv = sv2;
    sv.reverse();
    show(sv);

    StrVec sv3; 
    sv3 = make_it(std::cin);
   
    show(sv3);

    StrVec sv4 = std::move(sv3);

    StrVec sv5 = make_it(std::cin);// copy elision ?? 

    show(sv5);
}
