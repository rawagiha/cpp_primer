#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
 
    auto beg = scores.begin();
    
    unsigned grade;
    while(std::cin >> grade)
    {
        if (grade <= 100)
        {
            *(beg + grade / 10) += 1;      
        }
    }

    for (const auto& cnt : scores)
    {
        std::cout << cnt << std::endl;
    }
}
