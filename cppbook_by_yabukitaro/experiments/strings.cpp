#include <iostream>
#include <typeinfo>
#include <string>

template<typename T>
void show_type_name(const T x){
    std::cout << typeid(x).name() << std::endl;
}

int main() {
    int a = 3;
    show_type_name(a);

    double aa = 3.1;
    show_type_name(aa);
    
    double* paa = &aa;
    show_type_name(paa);
    
    char b = 'r';
    show_type_name(b);
    
    char arr[] = "c-style string.";
    show_type_name(arr);
    
    std::string s = "this is a pen";
    show_type_name(s);

    const char* xx = s.c_str();
    show_type_name(xx);

    const char* yy = "this is not a pen";
    show_type_name(yy);
}
