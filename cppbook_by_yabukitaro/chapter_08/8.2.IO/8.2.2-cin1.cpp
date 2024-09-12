#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Input a string and hit Enter.\n";
    string str = "";
    cin >> str;
    cout << "Your input was [" << str << "].\n";

    cout << "Is this correct? (y/n) ";
    string yn = "";
    cin >> yn;
    
    while (yn != "y" && yn != "n") {
        cout << "invalid input, input y or n ";
        cin >> yn;
    }

    if (yn == "y") cout << "You think it is correct.\n";
    else cout << "you think it is incorrect.\n";
} 
