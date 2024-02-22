#include <vector>
#include <map>
#include <iostream>

int main()
{
    std::map<int, int> m;
    m[0] = 1;
   
    std::cout << m.at(0) << std::endl;
    
    std::vector<int> v;
    //v[0] = 1; v is empty. 1st elem not accesible -> Segmentation fault
    
    v.resize(1);
    v[0] = 1;

    std::cout << v.at(0) << std::endl;
    v.at(0) = 5; // v[i] and v.at(i) returns a reference
    std::cout << v[0] << std::endl;
    
}
