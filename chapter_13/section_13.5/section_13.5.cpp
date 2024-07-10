#include "section_13.5.h"

//static members must be defined in cpp
std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string& s)
{
    chk_n_alloc(); //ensure that the room is available.
    
    //construct a copy of s at first_free
    //then move first_free to the next
    alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string* b, const std::string* e)
{
    //allocate spapce to hold the specified range
    //this memory are unconstructed
    auto data = alloc.allocate(e - b); // pointer to the first 
    
    // uninitialized_copy returns the pointer to the one-past-last  
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    if (elements) // check for nullptr
    {
        //destroy strings in reserve order
        //memory -> unconstructed, but still allocated.
        for (auto p = first_free; p != elements; /* empty */)
            alloc.destroy(--p); 

        //free the allocated memory segment
        alloc.deallocate(elements, cap - elements);
    }
}

StrVec::StrVec(const StrVec& s)
{
    std::cout << "copied" << std::endl;
    
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::StrVec(std::initializer_list<std::string> lst)
{
    std::cout << "created from initializer list" << std::endl;
    
    auto newdata = alloc_n_copy(lst.begin(), lst.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec() 
{ 
    std::cout << "destroyed" << std::endl;
    free(); 
}

StrVec& StrVec::operator = (const StrVec& rhs)
{
    std::cout << "copy assigned" << std::endl;
    
    //allocate & copy elemes somewhere 
    //(different from the originally allcated spece)
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    
    //destroy orig strings and free the originally allocated space
    free();

    elements = data.first;
    first_free = cap = data.second;

    return *this;
}

StrVec::StrVec(StrVec&& s) noexcept
    : elements(s.elements), first_free(s.first_free), cap(s.cap)
{
    std::cout << "moved" << std::endl;

    s.elements = s.first_free = s.cap = nullptr;
}

StrVec& StrVec::operator = (StrVec&& rhs) noexcept
{   
    std::cout << "move assigned" << std::endl;

    if (this != &rhs)
    {   
        /*no allocation happens*/   

        //destroy orig strings and free the allocated space
        free(); 
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;

        //make rhs destructible
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
} 

void StrVec::reallocate()
{
    //twice as big
    auto newcapacity = size() ? 2 * size() : 1;
    
    //allocate somewhere (different from the orig)
    //unconstructed
    auto newdata = alloc.allocate(newcapacity);

    auto dest = newdata;
    auto elem = elements;
    
    //construct by moving the orig element
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    
    //free the orig space
    free(); 

    elements = newdata;
    first_free = dest; //see the loop
    cap = elements + newcapacity;
}

void StrVec::reverse()
{
    if (!elements) return;
    
    const size_t sz = size();
    auto newdata = alloc.allocate(sz);
    
    auto dest = newdata; 
    auto elem = --first_free;

    for (size_t i = 0; i != sz; ++i)
        alloc.construct(dest++, std::move(*elem--));
    
    //free the orig space
    free();

    elements = newdata;
    first_free = dest;
    cap = elements + sz;
}
