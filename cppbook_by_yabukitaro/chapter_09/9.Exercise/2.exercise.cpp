#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

std::vector<int> deduplicate(const std::vector<int>& v) {
    std::set<int> s(v.begin(), v.end());
    std::vector<int> v2(s.begin(), s.end());
    return v2;
}

void show(const std::vector<int>& v) {
    for (auto i : v) std::cout << i << ", ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> v{0, 1, 2, 1, 0, 2, 1};
    std::vector<int> u = v;

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    show(v);

    show(deduplicate(u));

}

