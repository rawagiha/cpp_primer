#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    //regular constructor 
    Person() {
        std::cout << "(regular) constructor called\n";
    }
    
    //copy constuctor 
    Person(const Person& x) {
        name = x.name;
        age = x.age;
        std::cout << "(copy) constructor called\n";
    }

    //copy assign constructor
    Person& operator = (const Person& x) {
        if (this != &x) {
            name = x.name;
            age = x.age;
        }
        std::cout << "(copy&assign) constructor called\n";
        return *this;
    }
 
    //move constructor 
    Person(Person&& x) noexcept : name(x.name), age(x.age) {
        std::cout << "move contructor called\n";
    }
};

Person f(const std::string& name, int age) {
    Person p;
    p.name = name;
    p.age = age;
    return p;
}

int main() {
    Person shigeo;
    shigeo.name = "Shigeo";
    shigeo.age = 6;

    Person a(shigeo);
    std::cout << a.name << ", " << a.age << std::endl;
    
    Person b;
    b = shigeo;
    std::cout << b.name << ",,," << b.age << std::endl;
     
    Person c(f("megako", 43));
    std::cout << c.name << "......" << c.age << std::endl; 
}

