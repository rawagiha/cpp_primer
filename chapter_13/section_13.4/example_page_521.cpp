#include <string>

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
};
