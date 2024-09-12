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

        Person(Person&& x) noexcept : name(x.name), age(x.age), v(std::move(x.v)) {
            x.name = nullptr;
            std::cout << "moved.\n";
        }

        Person& operator = (Person&& x) noexcept {
            std::cout << "moved\n";
            if (this != &x) {
                delete name;
                name = x.name;
                x.name = nullptr;
                age = x.age;
                v = move(x.v);
            }
            return *this;
        }

};

struct Wrapper {
    Person p;
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


int g() {
    Person yoshio;
    *yoshio.name = "Yoshio";
    yoshio.age = 5;
    yoshio.v.push_back(9);
    yoshio.v.push_back(7);
    yoshio.v.push_back(5);
    
    return 3;
}

int main() {
    Wrapper w1, w2;
    *w1.p.name = "shigeo";
    w2 = std::move(w1);
    std::cout << *w2.p.name << std::endl;
}
