#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person
{
    std::string _name;
    std::string _address;

    std::string name() const 
    {
        return _name;
    }
    
    std::string address() const
    {
        return _address;    
    } 
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person._name >> person._adress;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name() << " " << person.address() << std::endl;
    return os;
}

#endif
