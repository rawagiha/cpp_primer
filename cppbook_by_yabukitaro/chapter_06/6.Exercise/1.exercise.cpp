#include <iostream>
#include <vector>

using namespace std;

int total(const vector<vector<int>>& m) {
    int x = 0;
    for (auto& i : m ) {
        for (auto& j : i) {
            x += j;
        }
    }

    return x;
}


int main() {
    vector<vector<int>> m { {1, 2, 3}, {4, 5, 6} };
    cout << total(m) << endl;
}
