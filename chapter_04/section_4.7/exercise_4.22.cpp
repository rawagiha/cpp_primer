#include <iostream>
#include <string>

int main()
{
    int grade;
    std::string finalgrade;
    if (std::cin >> grade)
    {
        finalgrade = (grade > 90) ? "high pass"
                                  : (60 <= grade && grade <= 75) ? "low pass"
                                  : (grade < 60) ? "fail" : "pass";
        
        std::cout << finalgrade << std::endl;
        
        finalgrade = "not evaluated";
        
        if (grade > 90)
        {
            finalgrade = "high pass";    
        }
        else if (grade > 75)
        {
            finalgrade = "pass";
        }
        else if (grade >= 60)
        {
            finalgrade = "low pass";
        }
        else
        {
            finalgrade = "fail";
        }
         
        std::cout << finalgrade << std::endl;       
    }
    else
    {
        std::cout << "invalid input" << std::endl;
    }
}
