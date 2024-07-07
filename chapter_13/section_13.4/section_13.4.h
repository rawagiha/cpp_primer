#include <string>
#ifndef SECTION_13_4_H
#define SECTION_13_4_H

#include <set>

class Folder;

class Message
{
    friend class Folder;
public:
    //explicit??
    //note the default arg
    explicit Message(const std::string& str = "") :
        contents(str) { }
    
    //copy constructor
    Message(const Message&);

    //copy assign
    Message& operator = (const Message&);
    
    //destructor
    ~Message();
    
    void save(Folder&);
    void remove(Folder&);
private:
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folders(const Message&);
    void remove_from_Folders();
};


class Folder
{
public:    
    std::set<Message*> messages;
    
    void addMsg(Message*);
    void remMsg(Message*);
};

#endif
