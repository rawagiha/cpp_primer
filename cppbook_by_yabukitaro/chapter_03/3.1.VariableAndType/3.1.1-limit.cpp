//needs -std=c++11 or higher to compile
#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "the lowest int is " <<
        numeric_limits<int>::lowest() << 
        ", the largest int is " <<
        numeric_limits<int>::max() << endl;
    //min = -2147483648, max 2147483647 on my system
    
    cout << "\n";

    cout << "the lowest double is " <<
        numeric_limits<double>::lowest() <<
        ", the larget double is " <<
        numeric_limits<double>::max() << endl;
    //min -1.79769e+308, max 1.79769e+308 on my system
}
