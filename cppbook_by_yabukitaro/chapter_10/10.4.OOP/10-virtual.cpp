#include <iostream>
#include <vector>

class Shape{
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() { std::cout << "〇" << std::endl; }
};

class Square : public Shape {
public:
    void draw() { std::cout << "□" << std::endl; }
};

int main() {
    Circle c;
    c.draw();

    Square s;
    s.draw();

    std::vector<Shape*> shapes = { &c, &s };
    for (auto p : shapes)
        p->draw();
}
