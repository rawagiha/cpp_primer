#include <iostream>
#include <cmath>

template<typename T>
class Point {
    T __x, __y;

public:
    Point(T x, T y) {
        __x = x;
        __y = y;
    }

    T get_dist_from_origin() {
        return std::sqrt(__x * __x + __y * __y);
    } 
};

int main() {
    Point<int> a(3, 4);
    std::cout << a.get_dist_from_origin() << std::endl;

    Point<double> b(3.0, 4.0);
    std::cout << b.get_dist_from_origin() << std::endl;

    Point<double> c(1.34, 3.4537);
    std::cout << c.get_dist_from_origin() << std::endl;
}
