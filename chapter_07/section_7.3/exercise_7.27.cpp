#include "Screen.h"

int main()
{
    Screen my_screen(5, 5, 'X');
    my_screen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    my_screen.display(std::cout);
    std::cout << "\n";
}
