#include <iostream>

class Person {
    std::string name;
    int age;
public:
    Person() {std::cout << "default called" << std::endl;}
    Person(const std::string& name, int age) : name(name), age(age) {
        std::cout << "custom constructor called" << std::endl;
    } 
    
    std::string get_name();
    int get_age();
};

std::string Person::get_name() {
    return name;
}

int Person::get_age() {
    return age;
}

int main() {
    Person people[5];
    std::cout << std::end(people) - std::begin(people) << std::endl;

    Person yoshio("Kaneko", 88);
    std::cout << yoshio.get_name() << ", " << yoshio.get_age() << std::endl;
}
