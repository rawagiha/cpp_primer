#include <iostream>
#include <regex>

using namespace std;

bool validate(const string zip, regex rx) {
    if (regex_match(zip, rx)) return true;
    else return false;
}

int main() {
    regex rx(R"(\d{3}-\d{4,6})");

    string zip1 = "132-45768";
    string zip2 = "123-567865234";
    
    cout << validate(zip1, rx) << endl;
    cout << validate(zip2, rx) << endl;
}
