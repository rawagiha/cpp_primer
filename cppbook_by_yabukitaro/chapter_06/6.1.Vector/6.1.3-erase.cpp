#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{ 1, 2, 4, 7, 3};
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    v.erase(v.begin() + 2);
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

}
