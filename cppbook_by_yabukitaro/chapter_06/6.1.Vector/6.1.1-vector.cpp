#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2(4);
    v2[0] = 4;
    v2[1] = 3;
    v2[2] = 2;
    v2[3] = 1;

    vector<int> v3{ 4, 3, 2, 1 };

    cout << (v1 == v2 ? "v1 and v2 are indentical" : "v1 and v2 are not indentical")
         << endl;

    cout << (v2 == v3 ? "v2 and v3 are indentical" : "v2 and v3 are not indentical")
         << endl;
}


