//needs -std=c++11 or higher to compile
#include <iostream>

using namespace std;

int main() {
    cout << "This\n is\n a\n pen." << endl;
    cout << R"(This\n is\n a\n pen.)" << endl; 

    cout << "This is a \"(Pen)\"." << endl;
    cout << R"(This is a \"(Pen)\".)" << endl;
}
