#include <iostream>
#include <vector>

int main()
{
    int i = 98;
    int* ptr = &i;
    std::cout << ptr << std::endl;
    //test if null first, then *(ptr++) next address and test if non-zero
    if (ptr != 0 && *ptr++) 
    {     
        std::cout << ptr << " " << *ptr << std::endl;
    }
    
    int ival = 0;
    //test if non-zero and +1, and test if ival+1 is non-zero
    if (ival++ && ival)
    {
        std::cout << "here" << std::endl;
    }       
    
    std::cout << ival << std::endl;
    std::vector<int> vec = {7, 8, 4, 5};
    //UB may be left-side first -> 8 then right-side 4
    std::cout << (vec[ival++] <= vec[ival]) << std::endl;
}
