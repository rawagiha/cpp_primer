#include <iostream>
#include <string>

int main()
{
    std::string s = "word";
    
    //s + s[s.size() - 1] == 's' ? "" : "s"
    //first: s[s.size() - 1] -> 'd'
    //second 'd' == 's'-> false
    //third s + false -> type mismatch
    std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

    std::cout << pl << std::endl;
}
