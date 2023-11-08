#include <iostream>

int main()
{
    //a) 
    int i;
    const int ic = 9;
    i = ic; // ok i does not have the const-ness
    std::cout << i << std::endl;
    i = 88;
    std::cout << i << std::endl;

    //b)
    int *p1; 
    const int *const p3 = &ic;
    //p1 = p3; p1 must be const int*

    //c)
    //p1 = &ic; p1 must be const int*

    //d)
    const int ic2 = 99;
    //p3 = &ic2; const pointer can't be changed

    //e
    int j = 89;
    int *const p2 = &j;
    //p2 = p1; const pointer can't be changed

    //f
    //ic = *p3; const int can't be changed
}
