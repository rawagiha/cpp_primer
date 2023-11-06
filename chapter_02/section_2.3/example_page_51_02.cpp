#include <iostream>

int main()
{
    int i = 1024, i2 = 2048; // both ints
    int& r = i, r2 = i2; //r is a ref to i, r2 is a copy of i2.
    int i3 = 1024, & ri = i3; //i3 is int, ri is ref to i3
    int& r3 = i3, & r4 = i2; // both ref 
    
    //ERROR
    //int& ref_val4 = 100;  initializer can't be literal
    int a = 100;
    int& ref_val4 = a; // must be object
    
    //ERROR
    double b = 3.14;
    //int& ref_val5 = b; //must be same type 
    double& ref_val5 = b;   
}
