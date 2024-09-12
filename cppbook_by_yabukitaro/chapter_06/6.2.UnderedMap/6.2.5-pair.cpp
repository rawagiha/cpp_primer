#include <iostream>
#include <string>
#include <tuple>
#include <utility>

using namespace std;

int main() {
    pair<string, int> shigeru("Shigeru", 67);
    auto kiyoshi = make_pair("Kiyoshi", 124);
   
    cout << shigeru.first << endl;
    cout << shigeru.second << endl;

    cout << kiyoshi.first << endl;
    cout << kiyoshi.second << endl;

    auto hanako = make_tuple("Hanako", "Yamada", 57, "apple");
    cout << "first name: " << get<0>(hanako) 
         << ", " 
         << "last name: " << get<1>(hanako)
         << ", "
         << "age: " << get<2>(hanako)
         << ", "
         << "favorite: " << get<3>(hanako)
         << endl;
}
