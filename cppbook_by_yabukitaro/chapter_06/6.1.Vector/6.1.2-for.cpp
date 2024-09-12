#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v { 9, 6, 3, 0 };

    size_t s = v.size();

    for (size_t i = 0; i < s; i++) {
        cout << v[i] << endl;
    }

    for (auto& i : v) {
         i = i * i;
    }

    for (auto i : v) {
        cout << i << endl;
    }


}
