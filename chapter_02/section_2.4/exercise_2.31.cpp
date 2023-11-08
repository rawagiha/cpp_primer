#include <iostream>

int main()
{
    const int v2 = 0; //can't change v2 -> top-level
    int v1 = v2; // copying only copy the value -> v1 is not const.
    int *p1 = &v1;
    int& r1 = v1;
    const int *p2 = &v2; // can change p2 -> low
    const int *const p3 = &v2; //rt const low lt const top
    const int  &r2 = v2;// low

    r1 = 8; // ok. 
    // p1 = p2; p1 is not const int*
    
    std::cout << p2 << " " << *p2 << " " << p1 << " " << *p1 << std::endl;
    p2 = p1; // ok, can convert int* to const int*
    std::cout << p2 << " " << *p2 << " " << p1 << " " << *p1 << std::endl;
    
    std::cout << "p1 and p2 has the same value. but different qualification" << std::endl;
    //*p2 = 7;
    *p1 = 7; // deref p1 can change the int value

    //p1 = p3; // p1 is not const int*
    p2 = p3; // p2 and p3 same low-level qualification (const int)
    std::cout << p2 << std::endl;
    p2 = nullptr;
    std::cout << p2 << std::endl;
    
}
