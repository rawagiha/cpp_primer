#include <iostream>
#include <memory>
#include <string>

class Person {
    std::string name;
    int age;
public:
    Person() {};
    Person(const std::string& name, int age) : name(name), age(age) {};
    ~Person() {
        std::cout << name << " was destroyed." << std::endl;
    }
};


int main() {
    Person a1("Ito Kyoshi", 67);
    Person* pa2 = new Person("Ito Seizou", 65);
    Person* pa3 = new Person("Nobuo", 17);
    auto pa4 = std::make_shared<Person>("Shigeru", 4);

    delete pa2;
}
