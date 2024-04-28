#ifndef EX_13_28_H
#define EX_13_28_H

#include <string>

class TreeNode
{
public:
    TreeNode() : value(std::string()), 
                 count(new int(1)), 
                 left(nullptr), 
                 right(nullptr) { }

private:
    std::string value
    int count;
    TreeNode* left;
    TreeNode* right;
};

#endif
