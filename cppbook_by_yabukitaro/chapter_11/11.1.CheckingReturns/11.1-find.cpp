#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v{ 2, 3, 5, 1, 4 };

    int target = 6;
    auto pos = find(v.cbegin(), v.cend(), target);

    // dangerous
    // std::cout << *pos << std::endl;
    //

    if (pos == v.cend()) {
        std::cout << "not found\n";
    }
    else {
        std::cout << *pos << std::endl;
    }
}
