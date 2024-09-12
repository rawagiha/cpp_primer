#include <iostream>
#include <string>
#include <utility>
#include <unordered_map> 

using namespace std;
typedef pair<string, int> person;


namespace std {
    template<>
    struct hash<person> {
        size_t operator()(const person& z) const {
            size_t h1 = hash<string>()(z.first);
            size_t h2 = hash<int>()(z.second);
            return h1 ^ h2;
        }
    };
}


int main() {

    unordered_map<person, int> people;
    
    auto taro = make_pair("Taro", 21);
  
    people[taro] = 100;

    cout << people[taro] << endl;
}
