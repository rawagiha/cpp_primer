#include <vector>
#include <iostream>

bool is_identical(const std::vector<int>& a, const std::vector<int>& b)
{
    return (a == b);
}

int main()
{
    std::vector<int> a = {1, 2, 3}, b = {1, 2, 4}, c = {1, 2, 3};
    std::cout << is_identical(a, b) << std::endl;
    std::cout << is_identical(b, c) << std::endl;
    std::cout << is_identical(c, a) << std::endl;
}
