#include <iostream>
#include <string>

int main()
{
    const size_t n = 1000;
    
    std::string* const p = new std::string[n];
    std::string s;
    std::string* q = p; // q points the first empty string

    while (std::cin >> s && q != p + n)
        *q++ = s;

    const size_t size = q - p;
    
    for (size_t i = 0; i != size; ++i)
        std::cout << p[i] << std::endl;

    delete [] p;
}
