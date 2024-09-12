#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fi("test.txt");
    string line;

    while (getline(fi, line)) {
        cout << line << endl;
    }
    fi.close();
}
