#include <iostream>
#include <vector>

int main()
{
    unsigned a_cnt = 0, e_cnt = 0, iou_cnt = 0;
    char ch = '\0';
    std::cout << "Enter char" << std::endl;
    std::cin >> ch;

    switch(ch)
    {
        case 'a':
            a_cnt++;
            break;
        case 'e':
            e_cnt++;
            break;
        default:
            iou_cnt++;
            break;
    }

    unsigned index = 0;
    std::vector<int> ivec = {1, 2, 3, 4};   
    
    std::cout << "Enter a positive int" << std::endl;
    std::cin >> index;
    std::cout << index << std::endl;

    int ix; 
    switch (index)
    {
        case 1:
            std::cin >> ix;
            if (ix < ivec.size())
                ivec[ix] = index;
            break;
        default:
            ix = ivec.size() - 1;
            ivec[ix] = index;
    }
    
    unsigned even_cnt = 0, odd_cnt = 0;
    int i;
    std::cout << "Enter an int" << std::endl;
    std::cin >> i;
    std::cout << i << std::endl;
    int digit = i % 10;

    switch(digit)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            ++odd_cnt;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            ++even_cnt;
            break;
    }

    std::cin.clear();
    std::cin.ignore();
    
    constexpr unsigned  ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt;
    
    std::cout << "Enter a positive int" << std::endl;
    std::cin >> swt;
    
    switch(swt)
    {
        case ival:
            bufsize = ival * sizeof(int);
            break;

        case jval:
            bufsize = jval * sizeof(int);
            break;

        case kval:
            bufsize = kval * sizeof(int);
            break;
    }   
}
