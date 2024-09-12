#include <iostream>
#include <string>

class Person {
    public:
        std::string* name;
        int age;

        Person() : name(new std::string) {}
        ~Person() { delete name; }

        Person(const Person& x) : name(new std::string(*(x.name))), age(x.age) {}

        Person& operator = (const Person& x) {
            if (this != &x) {
                auto tmp = new std::string(*x.name); // get new address
                delete name; //free self's previous resource 
                name = tmp;
                age = x.age;
            }
            return  *this;
        }
};

int main() {
    Person yoshio;
    *yoshio.name = "Yoshio"; 
    yoshio.age = 9;
    
    Person a;
    a = yoshio;  //copy and assign

    *yoshio.name = "Kiyoshi";

    std::cout << *yoshio.name << std::endl;
    std::cout << *a.name << std::endl;
}
