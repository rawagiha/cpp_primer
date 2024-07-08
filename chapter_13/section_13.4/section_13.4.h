#include <string>
#ifndef SECTION_13_4_H
#define SECTION_13_4_H

#include <set>

class Folder;

class Message
{
    friend class Folder;
    friend void swap(Message&, Message&);
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

    void show();
private:
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

void swap(Message&, Message&);

class Folder
{
    friend class Message;
    friend void swap(Message&, Message&);
public:
    Folder() = default;
    
    //copy constructor
    Folder(const Folder&);
    
    //copy assign
    Folder& operator = (const Folder&);

    //destructor
    ~Folder();

    void show();
private:    
    std::set<Message*> messages;
    
    void add_to_Messages(const Folder&);
    
    void remove_from_Messages();

    void addMsg(Message*);
    void remMsg(Message*);
};

#endif
