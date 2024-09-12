#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string str = "this is a pen.";
    int n = 123;
    
    cout << '[' << setw(55) << n << ']' << endl;
    cout << '[' << n << ']' << endl;
    cout << '[' << setw(7) << str << ']' << endl;
    
    stringstream ss;
    ss << '[' << setw(55) << n << ']' << endl;
    string result = ss.str();
    cout << result << endl;

    double x = 1. / 7;
    cout << x << endl;
    cout << setprecision(10);
    cout << x << endl;
    cout << setprecision(6); 
    cout << x << endl;
}
