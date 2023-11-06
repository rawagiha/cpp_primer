#include <iostream>

int main()
{
    int ival = 1024;
    int& ref_val = ival; // ref_val refers to ival (ref_val is another name of ival)
    
    // int& ref_val_2; ERROR reference must be initialized
    
    ref_val = 2; // same as ii = 2 
    std::cout << ival << " ival changes to 2" << std::endl;
    
    int ii = ref_val; // same as ii = ival -> copy
    ii = 3;  
    std::cout << ival << " ival remains 2" << std::endl; 
    
    int& ref_val_3 = ref_val; // ref_val_3 refers to ival
}
