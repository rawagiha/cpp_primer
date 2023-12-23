#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>
#include "Screen.h"

class Window_mgr
{
public:
    using screen_index = std::vector<Screen>::size_type;
    void clear(screen_index);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
}

void Window_mgr::clear(screen_index i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

#endif
