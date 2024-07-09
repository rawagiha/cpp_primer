#include <iostream>
#include <string>

int main()
{   
    /* pointer does not allocate memory, 
     * it simply specifies the memory location.
     */
     
    //reserve memory enouth to store a str obj "abc"
    std::string* p = new std::string{"abc"};

    std::cout << p << " " << *p << std::endl;
    
    //dynamically allocated
    *p = "this is very long long long long long string...";
    std::cout << p << " " << *p << std::endl;
    
    delete p; //destroy the object
              //release memory -> p no longer owns it.
              //still pointing to the same address
              //does not own memory -> can't deref

    std::cout << p << std::endl;

    //reserve memory again at the same address
    //to creat another str obj
    p = new std::string{
        "pen is a this. this is not a pencil. and today is not Friday "
    };

    std::cout << p << " " << *p << std::endl;

    delete p;
}
