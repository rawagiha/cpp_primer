#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fo("test.txt", ios_base::out);
    fo << "this is a pen.\n";
    fo << "here is not Fort Lauderdale.";
    fo << endl;
    fo.close();

    ofstream foo("test.txt", ios_base::app);
    foo << "it is fine today.";
    foo << endl;
    foo.close();
}
