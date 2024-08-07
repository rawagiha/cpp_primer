#include "section_13.4.h"
#include <iostream>

void Message::save(Folder& f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder& f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Message::show()
{
    std::cout << contents << std::endl;
}

void Message::add_to_Folders(const Message& m)
{
    for (auto f : m.folders)
        f->addMsg(this);
}

Message::Message(const Message& m) :
    contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}

void Message::remove_from_Folders()
{
    for (auto f : folders)
        f->remMsg(this);
}

Message::~Message()
{
    remove_from_Folders();
}

Message& Message::operator = (const Message& rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Message& lhs, Message& rhs)
{
    using std::swap;

    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);

    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);

    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

void Folder::show()
{
    unsigned int i = 1;
    for (auto m : messages)
    {
        std::cout << "# " << i << " message is: ";
        m->show();
        ++i;
    }
}

void Folder::add_to_Messages(const Folder& f)
{
    for (auto m : f.messages)
        m->folders.insert(this);
}

Folder::Folder(const Folder& f):
    messages(f.messages)
{
    add_to_Messages(f);
}

void Folder::remove_from_Messages()
{
    for (auto m : messages)
        m->folders.erase(this);
}

Folder::~Folder()
{
    remove_from_Messages();
}

Folder& Folder::operator = (const Folder& rhs)
{
    remove_from_Messages();
    messages = rhs.messages;
    add_to_Messages(rhs);
    return *this;
}

void Folder::addMsg(Message* m)
{
    messages.insert(m);
}

void Folder::remMsg(Message* m)
{
    messages.erase(m);
}
