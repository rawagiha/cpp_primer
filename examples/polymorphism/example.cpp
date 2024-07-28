#include <iostream>
#include <vector>

/*taken from yabuki taro's c++ book (ISBN978-4-8222-9893-7) page 228*/

struct Shape
{
    virtual void draw()
    {
        std::cout << "no shape to draw" << std::endl;
    }
};

struct Circle : public Shape
{
    void draw() override
    {
        std::cout << "〇" << std::endl;
    }
};

struct Rectangle : public Shape
{
    void draw() override
    {
        std::cout << "◇" << std::endl;
    }
};

int main()
{
    Shape s;
    Circle c;
    Rectangle r;
    
    //mind the type in vecotr <Shape>
    //c and r are reduced to Shape
    std::vector<Shape> shapes = { s, c, r }; 
    for (auto shape : shapes)
        shape.draw();
     
    std::cout << std::endl;
    
    //as pointer---vector<Shape*>
    //polymorphism retained
    std::vector<Shape*> p_shapes = { &s, &c, &r };
    for (auto shape : p_shapes)
        shape->draw();

}
