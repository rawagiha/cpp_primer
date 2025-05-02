#include <iostream>
#include <string>
#include <vector>

//forward declaration
struct Node;

//declare here to be visible in the destructor
Node* nil;

struct Node
{
    Node* next;
    std::string name;

    Node(std::string name_ = "") : next(nullptr), name(name_) { } 

    ~Node() 
    {
        //nill->node_1->node_2->...->node_n->nill
        //recursively destroy but has to stop at nill
        if (next != nil)
        {
            std::cout << name << ": deleted" << std::endl;
            delete next;
        }
    }
};


//initialization
//pointing to self
void init()
{
    nil = new Node();
    nil->next = nil;

    //nil will outlive!
}

void show()
{
    Node* curr = nil->next;

    for(; curr != nil; curr = curr->next)
        std::cout << curr->name << " -> ";

    std::cout << std::endl;
}

void clear()
{
    Node* curr = nil->next;
    for (; curr != nil; curr = curr->next)
        delete curr;
}

//insert v after p
void insert(Node* v, Node* p=nil)
{
    v->next = p->next;
    p->next = v;
}

int main()
{
    std::vector<std::string> names = {"yamamoto",
                                      "watanabe",
                                      "ito",
                                      "takahashi",
                                      "suzuki",
                                      "sato"};
    
    
    init();
    
    for (size_t i = 0; i < names.size(); ++i)
    {
        Node* node = new Node(names[i]);

        insert(node);

        std::cout <<"step " << i << ": ";
        show();
    }
    
    delete nil; //will recurvely destroy linked nodes

    nil = nullptr; //nill is dandling -> set to NULL
}
