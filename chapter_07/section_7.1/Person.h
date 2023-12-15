#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    std::string _name;
    std::string _address;

public:
    std::string name() const 
    {
        return _name;
    }
    
    std::string address() const
    {
        return _address;    
    } 
};


#endif
