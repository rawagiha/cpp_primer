#include <iostream>
#include <string>

class Employee
{
private:
    static int unique;
    int id;
    std::string name;
public:
    Employee() { id  = unique++; } ;
    Employee(const std::string& _name) : name(_name) { id = unique++; };
    void show_name() const { std::cout << name << std::endl; }
    void show_id() const { std::cout << id << std::endl; }
};


int Employee::unique = 777;


int main()
{
    Employee a, b, c;
    a.show_name();
    a.show_id();
    b.show_id();
    c.show_id();

    Employee d("this is a pen");
    d.show_name();
    d.show_id();
}
