#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(int argc, char *argv[])
{
 if (argc != 4) return -1;

    std::ifstream ifs(argv[1]);
    
    // constructor of the std::ofstream automatically opens the file
    std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

    std::istream_iterator<int> in(ifs), in_eof;
    std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

    for (/* */; in != in_eof; ++in)
    {
        if (*in % 2)
        {
            *out_odd++ = *in;
        }
        else
        {
            *out_even++ = *in;
        }
    }
    
    ofs_odd.flush();
    ofs_odd << "\n";

    return 0;
}
