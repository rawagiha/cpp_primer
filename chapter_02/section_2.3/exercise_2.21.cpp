#include <iostream>

int main()
{
    int i = 0;
    
    //illegal type is different
    //double* dp = &i;
    
    //illegal, 
    int *ip = nullptr;// or 0, not by i

    //legal
    int *p = &i;

} 
