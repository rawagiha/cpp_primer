#include <iostream>

struct Person {
    std::string name;
    int age;

    void tell_about_you();
    std::string what_your_name();
    int how_old();
};

void Person::tell_about_you() {
    std::cout << name << " (" << age << ")\n";
}

std::string Person::what_your_name() {
    return name;
}

int Person::how_old() {
    return age + 6;
}

int main() {
    Person taro {"Shigeru", 76};
    
    taro.tell_about_you();
    std::cout << taro.how_old() << std::endl;

    Person* pHanako = new Person {"Shigeko", 53};
    pHanako->tell_about_you();
    std::cout << pHanako->what_your_name() << std::endl;
    delete pHanako;
}


