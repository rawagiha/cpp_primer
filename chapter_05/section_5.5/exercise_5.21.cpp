#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string curr_word, prev_word;
    
    while(std::cin >> curr_word && !curr_word.empty())
    {
       
        if (prev_word.empty())
        {
            prev_word = curr_word;
            continue;
        }
        
        if (curr_word != prev_word)
        {
            std::cout << "not repeat. don't need this -> " << prev_word << " " << curr_word << std::endl;
            prev_word = curr_word;
            continue;
        }    
        else if (!std::isupper(curr_word[0]))
        {
            std::cout << "not starts with capital. don't need this -> " << prev_word << " " << curr_word <<  std::endl;
            prev_word = curr_word;
            continue;
        }    
        

        std::cout << "This is what I am looking for " << prev_word << " " << curr_word << std::endl;
        
        return 0;
    }
}

