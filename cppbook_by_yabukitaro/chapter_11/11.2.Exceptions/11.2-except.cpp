#include <iostream>

[[noreturn]]
void doSomething() {
    throw std::runtime_error("something wrong...\n");
}

int main() {
    try {
        doSomething();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
