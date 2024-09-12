#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[1]) {
    std::ifstream fi(argv[1]);

    if (!fi) {
        std::cout << "no such file\n";
    }
    else {
        std::string line;
        while (getline(fi, line)) {
            std::cout << line << std::endl; 
        }
    }
}
