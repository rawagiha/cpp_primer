#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> dict{ {"one", 0 }, {"two", 2}, {"three", 3} };

    cout << dict["two"] << endl;
    
    dict["one"] = 1;

    dict["four"] = 4;
     
    cout << endl;
    for (const auto& elem : dict) {
        cout << elem.first << ", " << elem.second << endl;
    }
    
    // look up non-existing key
    dict["seven"];
    cout << endl;
    for (const auto& elem : dict) {
        cout << elem.first << ", " << elem.second << endl;
    }
    
    cout << endl;
    auto hit = dict.find("three");
    //unordered_map<string, int>::const_iterator hit = dict.find("three");
    
    cout << hit->first << ", " << hit->second << endl;
    
    cout << endl;
    if (dict.find("five") == dict.end()) {
        cout << "not found.\n";
    }
   
}
