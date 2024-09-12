#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;
};

Person f() {
    Person kiyoshi;
    kiyoshi.name = "Shigeru";
    kiyoshi.age = 55;
    return kiyoshi;
}

int main() {
    //constructor
    Person takeshi;
    takeshi.name = "yamada";
    takeshi.age = 23;

    //copy constuctor
    //make A by copying takeshi
    Person A(takeshi);
    std::cout << "I am A. my name " << A.name << " and " << A.age << " years old." << std::endl;
    
    //copy
    //make empty B and overwrite by takeshi
    Person B;
    B = takeshi;
    std::cout << "I am B. my name " << B.name << " and " << B.age << " years old." << std::endl;
    
    //move constructor
    Person C(f());
    std::cout << "I am C. my name " << C.name << " and " << C.age << " years old." << std::endl;
}
