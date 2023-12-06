#include <iostream>
#include <string>

int main()
{
    unsigned int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt =0, u_cnt = 0;
    unsigned int blank_cnt = 0, tab_cnt = 0, newline_cnt = 0;
    
    /*
    std::string line;
    while(getline(std::cin, line))
    {
        for (const auto& c : line)
        {
            switch (c)
            {    
                case 'a':
                case 'A':
                    ++a_cnt;
                    break;
                case 'e':
                case 'E':
                    ++e_cnt;
                    break;
                case 'i':
                case 'I':
                    ++i_cnt;
                    break;
                case 'o':
                case 'O':
                    ++o_cnt;
                    break;
                case 'u':
                case 'U':
                    ++u_cnt;
                    break;
            }
        }
    }*/
    
    char c;
    while(std::cin >> std::noskipws >> c)
    {
        switch (c)
        {    
            case 'a':
            case 'A':
                ++a_cnt;
                break;
            case 'e':
            case 'E':
                ++e_cnt;
                break;
            case 'i':
            case 'I':
                ++i_cnt;
                break;
            case 'o':
            case 'O':
                ++o_cnt;
                break;
            case 'u':
            case 'U':
                ++u_cnt;
                break;
            case ' ':
                ++blank_cnt;
                break;
            case '\t':
                ++tab_cnt;
                break;
            case '\n':
                ++newline_cnt;
                break;
        }
    }

    std::cout << a_cnt << " " << e_cnt << " " << i_cnt << " " << o_cnt << " " << u_cnt << std::endl;
    std::cout << blank_cnt << " " << tab_cnt << " " << newline_cnt << std::endl;
}
