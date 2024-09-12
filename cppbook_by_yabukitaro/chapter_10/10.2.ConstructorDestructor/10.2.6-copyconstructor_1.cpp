#include <iostream>
#include <string>

class Person {
    public:
     std::string name;
     int age;
};

int main() {
    Person yoshio { "Yoshio", 5 };

    Person a = yoshio;

    std::cout << "my name is " << a.name << " and " << a.age << " years old." << std::endl;
    
    a.name = "Shigeru";
    a.age = 8;
    
    std::cout << "my name is " << a.name << " and " << a.age << " years old." << std::endl;
}
