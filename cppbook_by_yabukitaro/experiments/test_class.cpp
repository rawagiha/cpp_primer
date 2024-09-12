#include <iostream>
#include <string>

class Car {
    std::string color;
    double mpg;
public: 
    Car() {};
    Car(std::string color, double mpg) : color(color), mpg(mpg) { 
        std::cout << "constructor called." << std::endl;
        std::cout << "the initial color is: " << color << std::endl;
        std::cout << "the initial mpg is: " << mpg << std::endl;
    }
};


int main() {
    Car my_car("red", 50.2);
    //Car my_car;
}
