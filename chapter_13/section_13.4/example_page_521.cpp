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
