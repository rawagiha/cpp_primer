#include <string>

class Folder;

class Message
{
    friend class Folder;
public:
    explicit Message(const std::string& str = "") :
        contents(str) { }
private:
    std::string contents;
};
