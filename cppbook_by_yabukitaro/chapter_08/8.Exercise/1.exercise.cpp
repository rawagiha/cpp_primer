#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fo("one_to_thousand.txt", ios_base::out);
    int i = 1;
    while (i <= 1000) {
        fo << i++ << "\n";
    }
    fo.close();
}
