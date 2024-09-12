#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{ 1, 2, 3 };
    v[3] = 4;
    for (auto& i : v) std::cout << i << ", ";
    std::cout << std::endl;
    std::cout << "done\n";

    try {
        std::cout << v.at(3) << std::endl;
    }
    catch (std::out_of_range& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "done done\n";

    //core dumped
    //std::cout << v.at(7) << std::endl;
    //std::cout << "done done done\n";
}
