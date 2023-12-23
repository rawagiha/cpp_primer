#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>
#include <iostream>

class Screen;

class Window_mgr
{
public:
    using screen_index = std::vector<Screen>::size_type;
    void clear(screen_index);
private:
    std::vector<Screen> screens;
};

class Screen
{
    friend class Window_mgr;
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): 
           height(ht), width(wd), contents(ht * wd, c) {}
    
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    
    Screen& move(pos r, pos c);
    Screen& set(char);
    Screen& set(pos, pos, char);
    Screen& display(std::ostream& os)
    { 
            do_display(os);
            return *this;
    }
    const Screen& display(std::ostream& os) const
    {
            do_display(os);
            return *this;
    }
          
    void  some_member() const; 
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;

    void do_display(std::ostream& os) const 
        { os << contents; }
};

inline 
Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline
Screen& Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline
Screen& Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const
{
    ++access_ctr;
}

void Window_mgr::clear(screen_index i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

#endif
