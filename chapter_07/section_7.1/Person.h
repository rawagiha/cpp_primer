#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person
{
    std::string _name;
    std::string _address;
    
    Person() = default;
    Person(const std::string& name):  _name(name) {}
    Person(const std::string& name, const std::string& address):
           _name(name), _address(address) {}
    Person(std::istream&);
    
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
    is >> person._name >> person._address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name() << " " << person.address() << std::endl;
    return os;
}

Person::Person(std::istream& is)
{
    read(is, *this);
}
#endif
