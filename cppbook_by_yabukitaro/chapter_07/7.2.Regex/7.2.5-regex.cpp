#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string str = "abdc,123 xy,z ggg.rrr r rll";
    
    regex rx(R"(,|\s|\.)");
    
    sregex_token_iterator it(str.begin(), str.end(), rx, -1);
    
    sregex_token_iterator end;
    
    while (it != end) {
        cout << (it++)->str() << endl;
    }
} 
