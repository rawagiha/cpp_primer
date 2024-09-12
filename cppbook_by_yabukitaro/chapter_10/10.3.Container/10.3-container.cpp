#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>

class Person {
    public:
        std::string name;
        int age;
        
        Person() = default;
        Person(const std::string& new_name, int new_age) : name(new_name), age(new_age) {}

        bool operator == (const Person& p) const {
            return name == p.name && age == p.age;
        }
        
};


bool operator < (const Person& lhs, const Person& rhs) {
    return lhs.name < rhs.name;
}

namespace std {
    template<>
    struct hash<Person> {
        size_t operator () (const Person& p) const {
            return hash<std::string> () (p.name) ^ hash<int> () (p.age);
        }
    };
}

int main() {
    std::vector<Person> five_people(5);

    std::vector<Person> people;

    Person kiyoshi("cKiyoshi", 2);
    people.push_back(kiyoshi);
    people.emplace_back("bNoriko", 4);
    people.emplace_back("aTsuyoshi", 6);

    sort(people.begin(), people.end());
    for (auto& p : people) std::cout << p.name << ", ";
    std::cout << std::endl;

    std::set<Person> people_set;
    people_set.emplace("xy", 4);
    people_set.emplace("ds", 43);
    people_set.emplace("fg", 5);
    for (auto& p : people_set) std::cout << p.name << ", ";
    std::cout << std::endl;

    std::unordered_map<Person, std::string> people_dict;
    people_dict.emplace(Person("ff", 4), "this is a pen");
    people_dict.emplace(Person("kkk", 6), "not and");
    people_dict.emplace(Person("ee", 3),  "fort lauderdale");
    
    Person ee("ee", 3);

    std::cout << people_dict[ee] << std::endl;
}
