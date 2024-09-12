#include <iostream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main() {
    // constructing in stack
    Person taro {};
    taro.name = "Taro";
    taro.age = 4;
    std::cout << taro.name << ", " << taro.age << std::endl;

   // constructing in heap
   Person* pHanako = new Person {"Hanako", 1};
   std::cout << pHanako->name << ", " << pHanako->age << std::endl;
   delete pHanako;
   
   std::vector<Person> v;
   v.emplace_back();
   v[0].name = "Saburo";
   v[0].age = 5;
   v.emplace_back();
   v[1].name = "Shiro";
   v[1].age = 54;
}
