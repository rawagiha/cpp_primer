#include <string>
#include <vector>
#include <memory>

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    size_type size() const { return data->size(); }

private:
    std::shared_ptr<std::vector<std::string>> data;
};
