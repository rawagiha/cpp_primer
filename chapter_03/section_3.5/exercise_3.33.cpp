#include <iostream>

int main()
{
    unsigned scores[11] = {}; //initialized to zesos
    unsigned scores2[11];  //undefined

    for (size_t i = 0; i < 11; ++i)
    {
        std::cout << i << "-th elem: " << scores[i] << " " << scores2[i] << std::endl;
    }
}
