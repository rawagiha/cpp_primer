#include <string>
#include <iostream>

typedef std::string Type;

Type init_val(); //string

class Exercise
{
public:
    typedef double Type; 
    Type set_val(Type); //double (double)
    Type init_val(); //double
private:
    int val;
};

Exercise::Type Exercise::init_val() //double
{
    return 1.2;
}

//Type Exercise::set_val(Type param) //string complier sees Exercise -> (double)
Exercise::Type Exercise::set_val(Type param) //double (double)
{
    val = param + init_val();
    return val;
}

int main()
{
    Exercise ex;
}
