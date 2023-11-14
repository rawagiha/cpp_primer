#include <iostream>
#include <string>

int main()
{
    const std::string s = "Keep out!";

    // auto ignores top-level const (i.e., auto& -> char&)
    for (auto& c : s)
    {
        std::cout << c << std::endl;
    }
}
