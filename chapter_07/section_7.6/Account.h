#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
public:
    void calculate()
    {
        amount += amount * interest_rate;
    }    
    
    static double rate()
    {
            return interest_rate;
    }

    static void rate(double new_rate)
    {
        interest_rate = new_rate;
    }
    
    // static member is not a part of individual obj
    //Account() { interest_rate = init_rate(); }
private:
    std::string owner;
    double amount;
    //Moophy
    static constexpr double today_rate = 42.42;
    static double interest_rate;
    static double init_rate()
    {
        return today_rate;
    }
};

// define and initialize static member outside the class body
// "interest_rate" is private, but accessible, 
double Account::interest_rate = init_rate();

#endif
