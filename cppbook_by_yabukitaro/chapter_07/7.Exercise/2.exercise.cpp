#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    double x = 0.1;

    stringstream ss;
    ss << hexfloat << x; 

    string z = ss.str();

    cout << x << endl;
    cout << z << endl;

    cout << (x == stod(z) ? "=" : "!=") << endl; 
}
