#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream fi("test_data.tab");
    
    string label;
    int x, y, z;
    while(fi >> label >> x >> y >> z) {
        cout << label << ": " << x + y + z << endl;
    }
    fi.close();
}
