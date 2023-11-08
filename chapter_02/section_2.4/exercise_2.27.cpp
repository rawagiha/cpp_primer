#include <iostream>

int main()
{
    
    //a)
    //int i = -1, &r = 0; ERROR can't refer to non-const literal
    
    //b)
    int i2 = 99;
    int *const p2 = &i2; // const pointer to int
    
    *p2 = 33; // the pointee may be changed
    std::cout << i2 << std::endl;
     
    //int j = 33;
    //p2 = &j; // const pointer can't change the address
    
   //c)
   const int i = -1, &r = 0; // ok to refer to const literal (temp created)
   
   //d)
   //const int h = 90;
   int h = 90;
   const int *const p3 = &h; // const pointer to const int
   // *p3 = 45; can't change the pointeee
    
   //e)
   int g = 78;
   const int* p4 = &g; // pointer to const int
   std::cout << p4 << std::endl;
   
   //*p4 = 6; can't change the pointee
   int g2 = 78;
   p4 = &g2;  // may be change the address 
   std::cout << p4 << std::endl;

  //f)
  //int rr2 = 9;
  //const int &const rr2;
  
  //g)
  const int ii2 = i, &rrr = i; 

}
