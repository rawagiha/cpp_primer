#include <iostream>

int main() {
    try {
        while (1) {
            int* p = new int[0x1fffffff];
            std::cout << p << std::endl;
        }
    }
    catch (std::bad_alloc& e) {
        std::cerr << e.what() << std::endl;
    }
}
