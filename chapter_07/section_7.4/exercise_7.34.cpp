#include <string>
#include <iostream>

typedef std::string Type;

Type init_val();

class Exercise
{
public:
    typedef double Type; 
    ::Type set_val(::Type);
    ::Type init_val(); //init_val as member not global
private:
    //int val;
    ::Type val;
};

::Type Exercise::init_val()
{
    return "this is a pen";
}

::Type Exercise::set_val(::Type param)
{
    val = param + init_val();
    return val;
}

int main()
{
    Exercise ex;
}
