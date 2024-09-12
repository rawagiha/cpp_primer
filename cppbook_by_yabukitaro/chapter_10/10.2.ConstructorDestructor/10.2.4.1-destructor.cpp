#include <iostream>
#include <string>
#include <memory>

class A {
public:
    ~A() {
        std::cout << "A was destroyed.\n";
    }
};

class Person {
    std::string name;
    std::shared_ptr<A> pa;

public:
    Person(const std::string& name) : name(name), pa(new A) {}
    ~Person() {
        //delete pa;
        std::cout << name << " was destroyed.\n";
    }
};

int main() {
    Person a1("Hiroshi");
    auto  pa2 = std::make_shared<Person>("Toru");
    return 1;
}
