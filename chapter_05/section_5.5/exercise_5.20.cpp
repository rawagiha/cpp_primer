#include <iostream>
#include <string>

int main()
{
    std::string curr_word, prev_word;
    bool is_repeated = false;
    while(std::cin >> curr_word && !curr_word.empty())
    {
        if (curr_word == prev_word)
        {
            is_repeated = true;
            break;
        }

        prev_word = curr_word;
    }
    
    if (is_repeated)
        std::cout << curr_word << " is repeated" << std::endl;
    else
        std::cout << "No repeat word" << std::endl;

}

