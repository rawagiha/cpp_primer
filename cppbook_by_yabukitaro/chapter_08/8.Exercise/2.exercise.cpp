#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool is_found(const string fileName) {
    ifstream fi(fileName);
    return fi.good();
}

int getSum(const string fileName) {
    int total = 0;

    if (is_found(fileName)) {
        ifstream fi(fileName);
        
        string line;
        while(getline(fi, line)) {
            total += stoi(line);
        }
        fi.close();
    }
    else cout << fileName << " can't be found." << endl;
    
    return total;  
}

int main() {
    
    string fileName_1 = "one_to_1000.txt";
    string fineName_2 = "one_to_thousand.txt";

    getSum(fileName_1);

    cout << "total is: " << getSum(fineName_2)  << endl;

}
