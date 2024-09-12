#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";

    cout << str1[4] << endl;

    str1 += str2;
    cout << str1 << endl;

    cout << (str1 == str2) << endl;
    cout << (str1 == "Hello, World!") << endl;
    
    cout << str1.compare("Hallo, World!") << endl;
    cout << str1.compare("Hello, World!") << endl;
    cout << str1.compare("Hello, Wozld!") << endl;

    cout << str1.find("World") << endl;
    cout << str1.rfind("o") << endl;

    str1.replace(7, 5, "Fort Lauderdale");
    cout << str1 << endl;

    cout << str1.substr(7, 16) << endl;
}
