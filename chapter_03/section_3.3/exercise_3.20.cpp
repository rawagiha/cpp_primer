#include <iostream>
#include <vector>


int main()
{
    int i = 0;
    std::vector<int> vec1;
    while(std::cin >> i)
    {
        vec1.push_back(i);
    }

    for (decltype(vec1.size()) idx = 0; idx + 1 < vec1.size(); ++idx)
    {
        std::cout << vec1[idx] + vec1[idx + 1] << std::endl;    
    }

    for (decltype(vec1.size()) idx = 0; idx + 1 <= vec1.size() / 2; ++idx)
    {
        std::cout << vec1[idx] + vec1[vec1.size() - (idx + 1)] << std::endl;
    }
}
