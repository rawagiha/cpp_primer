#include <iostream>
#include <string>

std::string make_pleural(size_t ctr, const std::string &word, const std::string ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}


int main()
{
    std::cout << make_pleural(3, "success", "es") << std::endl;
    std::cout << make_pleural(2, "failure") << std::endl;
}
