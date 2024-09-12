#include <iostream>
#include <vector>


template<typename T> 
void my_swap(T& i, T& j) {
    T tmp = i;
    i = j;
    j = tmp;
}

template<typename T>
void my_reverse(T begin, T end) {
    while (begin < end) {
        my_swap(*(begin++), *(--end));
    }
}

template<typename T>
void show(const T& v) {
    for (auto i : v) std::cout << i << ", ";
    std::cout << std::endl;
}

int main() {
    int a[] = {2, 9, 4, 1, 5, 3};
    my_reverse(a, std::end(a));
    show(a);

    std::vector<double>  v{8.7, 3, 2.1, -9.6, 0.2};
    my_reverse(v.begin(), v.end());
    show(v);

    double b[] = {3.5};
    my_reverse(b, std::end(b));
    show(b);

    std::vector<int> c;
    my_reverse(c.begin(), c.end());
    show(c);
}
