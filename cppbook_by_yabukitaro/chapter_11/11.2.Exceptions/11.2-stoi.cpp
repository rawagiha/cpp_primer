#include <iostream>
#include <string>

int main() {
    int a, b;

    try {
        a = std::stoi("abc");
        std::cout << a << std::endl;
    }
    catch(std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        b = std::stoi("12499887799098765435667789976543344566");
        std::cout << b << std::endl;
    }
    catch(std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "done\n";
}

