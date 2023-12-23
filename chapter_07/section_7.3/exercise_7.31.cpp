#include <iostream>

class X;
class Y;

class X
{
public:
    Y* py = nullptr;
};

class Y
{
public:
    X x;
};

int main()
{
    X obj_x;
    Y obj_y;

    std::cout << obj_y.x.py << std::endl;
}
