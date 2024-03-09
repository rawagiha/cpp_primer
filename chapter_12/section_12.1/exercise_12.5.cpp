#include <string>
#include <vector>
#include <memory>
#include <iostream>

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    explicit StrBlob(std::initializer_list<std::string> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string& t) { data->push_back(t); }
    void pop_back();
    
    std::string& front();
    const std::string& cfront() const ;
    std::string& back();
    const std::string& cback() const; 
private:
    std::shared_ptr<std::vector<std::string>> data;

    void check(size_type i, const std::string& msg) const;
};

StrBlob::StrBlob() 
    : data(std::make_shared<std::vector<std::string>>()) { }
StrBlob::StrBlob(std::initializer_list<std::string> il) 
    : data(std::make_shared<std::vector<std::string>>(il)) { } 

void StrBlob::check(size_type i, const std::string& msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

std::string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const std::string& StrBlob::cfront() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const std::string& StrBlob::cback() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    return data->pop_back();
}


int main()
{
    StrBlob b({"this", "is", "a", "pen"}); // only direct initialization allowed    
    b.front() = "that";   
    std::cout <<  b.cfront() << std::endl;

    //b.cfront() = "those";
}
