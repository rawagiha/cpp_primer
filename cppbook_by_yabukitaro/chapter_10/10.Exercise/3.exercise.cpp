#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person {
public:
    std::string name;
    int age;
    Person(const std::string& new_name, int new_age) : name(new_name), age(new_age) {}
};

class Alphabet {
public:
    char letter;
    Alphabet(char new_letter) : letter(new_letter) {}
}; 

bool operator < (const Person& lhs, const Person& rhs) {
    return lhs.age < rhs.age;
}

bool operator < (const Alphabet& lhs, const Alphabet rhs) {
    return lhs.letter < rhs.letter;
}

int main() {   
    std::vector<Person> people;
    people.emplace_back("Tetsuo", 3);
    people.emplace_back("Yasuo", 7);
    people.emplace_back("Shigeo", 1);
    
    sort(people.begin(), people.end());
    for (auto& p : people) std::cout << p.name << ", " << p.age << "\n";
    
    std::vector<Alphabet> alphabets;
    alphabets.emplace_back('G');
    alphabets.emplace_back('c');
    alphabets.emplace_back('g');
    alphabets.emplace_back('C');
    alphabets.emplace_back('A');
    alphabets.emplace_back('a');
    sort(alphabets.begin(), alphabets.end());
    for(auto& a : alphabets) std::cout << a.letter << "\n";
        

}    
