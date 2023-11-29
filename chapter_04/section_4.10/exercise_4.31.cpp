#include <iostream>
#include <vector>

int main()
{ 
    std::vector<int> ivec(10);
    std::vector<int>::size_type cnt = ivec.size();

    for (std::vector<int>::size_type ix = 0; 
         ix != ivec.size(); 
         ix++, cnt--) //++ix, --cnt no change in behavior
    {
        ivec[ix] = cnt;
    }

    for (const auto i : ivec)
    {
        std::cout << i << std::endl;
    }
}  
