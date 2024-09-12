#include <iostream>
#include <vector>
#include <algorithm>
#include "../9.3.Callable/numofdivisors.h"

bool less(int a, int b) {
    int na = numOfDivisors(a);
    int nb = numOfDivisors(b);
    if (na == nb) return a < b;
    else return na < nb;
}

int main() {
    std::cout << std::min(3, 2) << std::endl;
    std::cout << std::max(3, 2) << std::endl;

    auto res = std::minmax({3, 2, 4, 5}, less);
    std::cout << res.first << ", " << res.second << std::endl;

    std::vector<int> v{40, 31, 23, 11, 45, 21};

    auto min_iter = std::min_element(v.cbegin(), v.cend());
    std::cout << *min_iter << std::endl;

    auto max_iter = std::max_element(v.cbegin(), v.cend(), less);
    std::cout << *max_iter << std::endl;
   
    auto minmax_iter = std::minmax_element(v.cbegin(), v.cend());
    std::cout << *minmax_iter.first << std::endl;
    std::cout << *minmax_iter.second << std::endl; 
}
