#include <iostream>
#include <string>

/*https://stackoverflow.com/questions/19562103/uint8-t-cant-be-printed-with-cout*/
/*uint8_t isn't prited out*/

void show(const uint8_t i,
          const std::string& s)
{
    std::cout << "first arg is: " << i << std::endl;  //doesn't show i
     
    std::cout << "zero + first arg is: " << i + 0 << std::endl; //works fine
    
    std::cout << "second arg is: " << s << std::endl; // works fine
}


int main()
{
    show(8, "this is a pen");
}
