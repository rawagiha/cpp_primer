#include <iostream>

struct A {
    int x;

    void showX() {
        std::cout << "x= " << x << std::endl;
    }

    static int s;
    static void showS() {
        std::cout << "s= " << s << std::endl;
    }
};

int A::s = 5;

int main() {
    A::showS();

    A a1, a2;
    a1.x = 1;
    a2.x = 2;
    a1.s = 9;
    a2.showS();
    a2.showX();
}
