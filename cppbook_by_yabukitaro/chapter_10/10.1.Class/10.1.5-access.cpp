#include <iostream>
#include <string>

class Person {
    std::string name;
    int age;
public:
    void set_name(const std::string& new_name) {name = new_name;}
    std::string get_name() {return name;}
    void set_age(const int new_age) {age = new_age;}
    int get_age() {return age;}
};

int main(){
    Person taro;
    taro.set_name("Nobuo");
    taro.set_age(76);
    std::cout << "my name is " << taro.get_name() << " and " << taro.get_age() << " years old." << std::endl;
} 
