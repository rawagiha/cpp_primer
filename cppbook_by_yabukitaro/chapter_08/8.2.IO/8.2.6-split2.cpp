#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    ifstream fi("test_data.tab");
    regex rx(R"(\s)");
    string str;

    while (getline(fi, str)) {
        sregex_token_iterator it(str.begin(), str.end(), rx, -1);
        sregex_token_iterator end;
        
        string label = *it++; //first column

        int total = 0;
        while (it != end) {
            total += stoi(*it++);
        }
        cout << label << ": " << total << endl;
    }
    fi.close();
}
