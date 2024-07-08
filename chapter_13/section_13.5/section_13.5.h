#ifndef SECTION_13_5_H
#define SECTION_13_5_H

#include <string>
#include <utility>
#include <memory>
#include <initializer_list>

class StrVec
{
public:
    StrVec():
        elements(nullptr), first_free(nullptr), cap(nullptr) { }

    StrVec(std::initializer_list<std::string>); 
    
    //copy constructor
    StrVec(const StrVec&);

    StrVec& operator = (const StrVec&);
    ~StrVec();

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

#endif
