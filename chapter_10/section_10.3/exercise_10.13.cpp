#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

bool is_longer_than_five(const std::string& word)
{
    return word.size() >= 5;
}

int main()
{
    std::vector<std::string> words{"this", "is", "actually", "not", "a", "pencil"};

    auto boundary = std::partition(words.begin(), words.end(),  is_longer_than_five);

    for (auto it = words.cbegin(); it != boundary; ++it)
    {
        std::cout << *it << std::endl;
    }

    for (/**/;boundary != words.end(); ++boundary)
    {
        std::cout << *boundary << std::endl;
    }
}
