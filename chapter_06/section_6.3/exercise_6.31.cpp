#include <iostream>
#include <vector>

int& fetch(std::vector<int>& vec, std::vector<int>::size_type i)
{
    return vec[i];
}


int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    //this return a ref. vec pre-exists. not local within fetch
    fetch(vec, 2) = 7;

    for (const auto& elem : vec)
        std::cout << elem << std::endl;
}
