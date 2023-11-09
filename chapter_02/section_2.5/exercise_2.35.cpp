#include <iostream>

int main()
{
    const int i = 42;
    auto j = i; //int 
    j = 8;
    std::cout << i << " " << j << std::endl;

    const auto& k = i; // const int ref // wiht &, top-level not ignored.
    //k = 7; const ref, can't use to change i
  
    auto* p = &i; // const int* 
    //*p = 99;
    
    const auto j2 = i, &k2 = i; // j2 cont int, const int ref
     

}
