#include <iostream>

void swap_ptr(const int*& p, const int*& q)
{
    const int* tmp = p;
    p = q;
    q = tmp;
}

int main()
{
    //top-level. can't change the obj
    const int i = 9;
    const int j = 7;
    
    //low-level. can't change the pointee
    const int* p = &i; 
    const int* q = &j;
    
    std::cout << p << " " << *p << " " << q << " " << *q << std::endl;
    
    swap_ptr(p, q);
    
    std::cout << p << " " << *p << " " << q << " " << *q << std::endl; 
}
