#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (const auto& i : vec1) std::cout << i << std::endl;

    std::vector<int> vec2(10, 42);
    for (const auto& i : vec2) std::cout << i << std::endl;
   
    std::vector<int> vec3;
    for (decltype(vec3.size()) i = 0; i != 10; ++i) 
    {    
        //NO vec3[i] = 42 subscript only fetches existing elem. NOT adding elements 
        vec3.push_back(42);
    }
    for (const auto& i : vec3) std::cout << i << std::endl;
}
