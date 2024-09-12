#include <iostream>
#include <string>
#include <vector>

class Person {
    public:
        std::string name;
        int age;
        std::vector<int> v;
};

Person f() {
    Person yoshio;
    yoshio.name = "Yoshio";
    yoshio.age = 5;
    yoshio.v.push_back(9);
    yoshio.v.push_back(7);
    yoshio.v.push_back(5);
    
    return yoshio;
}

int main() {

    Person a(f());
    std::cout << a.name << ": " << a.v.size() << std::endl; 
} 

