#include <iostream>
#include <chrono>
#include <vector>


class X {
public:
    std::vector<double> vec;
    X() = default;
    X(const X& x) : vec(x.vec) {}
};


X f() {
    X x;
    x.vec.resize(1000000);
    return x;
}

int main() {
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (int i = 1; i < 1000; i++) X x(f());
    std::chrono::steady_clock::time_point end= std::chrono::steady_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << std::endl;
}
