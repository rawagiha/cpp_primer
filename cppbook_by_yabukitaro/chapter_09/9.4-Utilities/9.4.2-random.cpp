#include <iostream>
#include <random>

std::random_device engine;
std::mt19937 gen(777);

int main() {
    std::uniform_int_distribution<unsigned> dist1(1, 6);

    for (int i = 0; i < 10; ++i) {
        std::cout << dist1(engine) << ", ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << dist1(gen) << ", ";
    }
    std::cout << std::endl;
}
