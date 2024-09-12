#include <iostream>
#include <string>
#include <vector>

class Person {
    public:
        std::string* name;
        int age;
        std::vector<int> v;
        Person() : name(new std::string) {}
        ~Person() { delete name; }

        Person(const Person& x) : name(new std::string(*(x.name))), age(x.age), v(x.v) {
            std::cout << "copy constructor called." << std::endl;
        }

        Person& operator = (const Person& x) {
            if (this != &x) {
                auto tmp = new std::string(*x.name);
                delete name;
                name = tmp;
                age = x.age;
                v = x.v;
            }
            return *this;
        }
};

Person f() {
    Person yoshio;
    *yoshio.name = "Yoshio";
    yoshio.age = 5;
    yoshio.v.push_back(9);
    yoshio.v.push_back(7);
    yoshio.v.push_back(5);
    
    return yoshio;
}

int main() {

    Person a(f());
    std::cout << *a.name << ": " << a.v.size() << std::endl; 
} 

