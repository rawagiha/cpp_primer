#include <iostream>
#include <memory>

//pass by value -> ptr copied -> ref cnt up
void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside process... use_count: " 
              << ptr.use_count() 
              << std::endl;
    *ptr = 200;
}

int main()
{
    std::shared_ptr<int> p(new int(42));
    std::cout << *p << " " << p.use_count() << std::endl;
    
    //p.get() -> get a ptr pointing the address of p
    //std::shared_ptr<int>(p.get()) creates a temporary shared ptr pointing the address of p
    //but this is not a copy of p but an indepdendent shared ptr pointing the same addresss
    //the temp shared ptr is copied to the parameter
    //when exiting process, the shared ptr frees the memory (also pointed by the original p)
    process(std::shared_ptr<int>(p.get()));
    
    //undefined
    std::cout << *p << " " << p.use_count() << std::endl;    
    
    //when exiting main, the original shared_ptr p frees the memory that has already been freed
    //in process -> double free

    //free(): double free detected in tcache 2
    //Aborted (core dumped)
}
