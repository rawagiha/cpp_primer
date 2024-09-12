#include <iostream>
#include <string>

class Person {
    public:
        std::string* name;
        int age;

        Person() : name(new std::string) {}
        ~Person() { delete name; }

        Person(const Person& x) : name(new std::string(*(x.name))), age(x.age) {}
};

int main() {
    Person yoshio;
    *yoshio.name = "Yoshio";
    yoshio.age = 7;
    
    Person a(yoshio);
    std::cout << *a.name << " (" << a.age << ")" << std::endl;

    *yoshio.name = "Shigeru";

    std::cout << *a.name << " (" << a.age << ")" << std::endl;
    std::cout << *yoshio.name << " (" << yoshio.age << ")" << std::endl;
}
