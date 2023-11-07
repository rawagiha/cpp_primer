#include <iostream>

int main()
{
    //const int buf; illegal uninitialized
    
    int cnt = 0; //ok
    const int sz = cnt;

    ++cnt; //ok
    std::cout << cnt << std::endl;
    //++sz; can't change sz. it's const
}
