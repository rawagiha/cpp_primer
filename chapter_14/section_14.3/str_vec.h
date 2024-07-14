#ifndef STR_VEC_H
#define STR_VEC_H

#include <string>
#include <utility>
#include <memory>
#include <initializer_list>
#include <iostream>

class StrVec
{
    friend bool operator == (const StrVec& rhs, const StrVec& lhs);
    friend bool operator != (const StrVec& rhs, const StrVec& lhs);
public:
    StrVec():
        elements(nullptr), first_free(nullptr), cap(nullptr) 
        { std::cout << "created " << std::endl; }

    StrVec(std::initializer_list<std::string>); 
    
    //copy constructor
    StrVec(const StrVec&);

    //copy-assign
    StrVec& operator = (const StrVec&);
    
    //destructor
    ~StrVec();

    //move constructor
    StrVec(StrVec&&) noexcept;
   
    //move assign
    StrVec& operator = (StrVec&&) noexcept;

    StrVec& operator = (std::initializer_list<std::string>);
    
    //subscripts
    std::string& operator [] (std::size_t n) 
    { 
        return elements[n]; //elements is treated as memory array
                            //and dereference   
    }
    
    const std::string& operator [] (std::size_t n) const
    {
        return elements[n];
    }

    void push_back(const std::string&);
    void reverse();
    
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string* begin() const { return elements; }
    std::string* end() const  { return first_free; }
private:
    static std::allocator<std::string> alloc; //object can allocate strings

    void chk_n_alloc()
    {
        if (size() == capacity()) reallocate();
    }
    
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string*, const std::string*);

    void free();
    void reallocate();
    std::string* elements; // pointer to first elem
    std::string* first_free; // pointer to first free elem
    std::string* cap; // pointer to one past the end of the array 
};

bool operator == (const StrVec& rhs, const StrVec& lhs);
bool operator != (const StrVec& rhs, const StrVec& lhs);

#endif
