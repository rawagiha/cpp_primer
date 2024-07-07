#include <string>
#include <set>

class Folder;

class Message
{
    friend class Folder;
public:
    explicit Message(const std::string& str = "") :
        contents(str) { }
    
    Message(const Message&);
    Message& operator = (const Message&);
    ~Message();
    
    void save(Folder&);
    void remove(Folder&);
private:
    std::string contents;
    set::set<Folder*> folders;

    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

void Message::save(Folder& f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder& f)
{
    folders.erase(&f)
    f.remMsg(this);
}

void Message::add_to_Folder(const Message& m)
{
    for (auto f : m.folders)
        f->addMsg(this)
}

Message::Message(const Message& m) :
    contents(m.contents), folders(m.folders)
{
    add_to_Folder(m);
}
