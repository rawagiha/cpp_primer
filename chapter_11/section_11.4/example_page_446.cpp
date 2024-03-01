#include <iostream>
#include <string>
#include <unordered_set>
#include <functional>

struct Car
{
    unsigned int year;
    std::string model;
    std::string color;
    
    Car(
        int year, std::string model, std::string color
    ) : year(year), model(model), color(color) { }
};

size_t hasher(const Car& car)
{
    return std::hash<std::string>() (car.model);
}

bool eq(const Car& lhs, const Car& rhs)
{
    return (lhs.model == rhs.model && lhs.year == rhs.year);
}

int main()
{
    using MyMultiSet = std::unordered_multiset<Car, 
                       decltype(hasher)*, decltype(eq)*>;
    
    MyMultiSet car_shop(10, hasher, eq);
    
    Car a(2021, "honda", "silver");
    car_shop.insert(a);
    Car b(1998, "honda", "silver");
    car_shop.insert(b);
    Car c(2020, "toyota", "red");
    car_shop.insert(c);
    Car d(2018, "nissan", "black");
    car_shop.insert(d);
    Car e(2018, "nissan", "blue");
    car_shop.insert(e);

    std::cout << hasher(a) << " " << hasher(b) << " " 
              << hasher(c) << " " << hasher(d) << " "
              << hasher(e) << std::endl;
    
    std::cout << eq(a, b) << " " << eq(d, e) << std::endl;

    std::cout << car_shop.max_bucket_count() 
              << " " << car_shop.bucket_count() 
              << " " << car_shop.load_factor() << std::endl; 

    
     
}
