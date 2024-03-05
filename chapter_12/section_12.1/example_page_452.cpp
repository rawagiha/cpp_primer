#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p; // null pointer
    std::cout << p.use_count() << std::endl; //zero

    auto r = std::make_shared<int>(42);
    std::cout << r.use_count() << std::endl; //one

    r = p;
    std::cout << p.use_count() << std::endl; //zero 
    std::cout << r.use_count() << std::endl; //zero
    
    std::shared_ptr<int> q = std::make_shared<int>(98);
    std::cout << q.use_count() << std::endl; // one
    
    // copy q to q2
    std::shared_ptr<int> q2(q);
    std::cout << q.use_count() << " " << q2.use_count() << std::endl; 

    std::shared_ptr<int> q3 = std::make_shared<int>(89);
    
    q = q3; // q and q3 point to 89, q2 points to 98
    std::cout << q.use_count() << std::endl;
    std::cout << q2.use_count() << std::endl;
    std::cout << q3.use_count() << std::endl;
}
