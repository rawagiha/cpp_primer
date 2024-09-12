#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v{ {1, 2, 3}, {4, 5, 6} };

    for (const auto& row : v) {
        for (const auto& x : row) {
            cout << x << ", ";
        }
        cout << endl;
    }
}
