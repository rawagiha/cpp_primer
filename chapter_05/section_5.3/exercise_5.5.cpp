#include <iostream>
#include <vector>
#include <string>

bool is_valid(int grade)
{
    if (grade < 0 || grade > 100) return false;
    return true;
}

int main()
{
    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    
    std::cout << "Input grade (int: 0 - 100)" << std::endl;
    
    int grade;
    bool validated = false;
    while (!validated)
    {
        if (std::cin >> grade && is_valid(grade))
        {
            validated = true;
        }
        else
        {
            std::cout << "Invalid input. Try again" << std::endl;
            std::cin.clear(), std::cin.ignore();
        }
    }
   
    if (grade < 60)
    {
        std::cout << scores[0] << std::endl;; 
    }
    else if (grade == 100)
    {
        std::cout << scores[5] << std::endl;;
    }
    else
    {
        std::string lettergrade, suffix;
        lettergrade = scores[(grade - 50) / 10]; 
        
        if (grade % 10 > 7)
        {
            suffix = "+";
        }
        else if (grade % 10 < 3)
        {
            suffix = "-";
        }
        
        std::cout << lettergrade + suffix << std::endl;                
    
    }
}
