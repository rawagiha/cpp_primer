#include <iostream>
#include <string>


class A {
public:
    ~A() {
        std::cout << "A was destroyed.\n";
    }
};

class Person {
    std::string name;
    A* pa;

public:
    Person(const std::string& name) : name(name), pa(new A) {}
    ~Person() {
        delete pa;
        std::cout << name << " was destroyed.\n";
    }
};

int main() {
    Person a1("Hiroshi");
    Person* pa2 = new Person("Toru");
    delete pa2;
}
