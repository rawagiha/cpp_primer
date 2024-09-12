#include <iostream>

int main() {
    while (1) {
        int* p = new(std::nothrow) int[0x1fffffff];
        if (p != nullptr) {    
            std::cout << p << std::endl;
        }       
        else {
            std::cout << "allocation failure\n";
            break;
        }
    }
}
