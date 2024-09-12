#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "input integers. hit Ctrl + D to see your total.\n";
    
    int total = 0, n = 0;
    while (cin >> n){
        total += n;
    }
    cout << "Your total is: " << total << ".\n";
} 
