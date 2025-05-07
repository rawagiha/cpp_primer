#include <iostream>
#include <string>
#include <vector>
#include <memory>

struct Node
{
    std::weak_ptr<Node> next;
    std::weak_ptr<Node> prev;

    std::string name;

    Node(std::string name_="") : name(name_) { }

    ~Node() 
    {
        std::cout << name << " deleted" << std::endl;
    }
};

std::shared_ptr<Node> init()
{
    auto nil = std::make_shared<Node>();
    nil->next = nil;
    nil->prev = nil; //get weak_ptr from shared by "="

    return nil;
}

void show(std::shared_ptr<Node> nil)
{
    auto curr = nil->next.lock();
    while(curr != nil)
    {
        std::cout << curr->name << " -> ";
        curr = curr->next.lock();
    }

    std::cout << std::endl;
}

void insert(std::shared_ptr<Node> v, std::shared_ptr<Node> p)
{
    v->next = p->next;
    v->prev = p;
    p->next.lock()->prev = v;
    p->next = v;
}

void erase(std::shared_ptr<Node>& v)
{
    // one (passed by reference)
    // two if passed by value
    std::cout << v.use_count() << std::endl;
    
    v->prev.lock()->next = v->next;
    v->next.lock()->prev = v->prev;

    v.reset(); 

    std::cout << "exiting -erase-" << std::endl;
}

int main()
{
    auto nil = init();

    auto yamamoto = std::make_shared<Node>("yamamoto");
    auto watanabe = std::make_shared<Node>("watanabe");
    auto ito = std::make_shared<Node>("ito");
    auto takahashi = std::make_shared<Node>("takahashi");
    
    std::cout << takahashi.use_count() << std::endl;
     
    insert(yamamoto, nil);
    insert(watanabe, nil);
    
    insert(ito, watanabe);
    
    insert(takahashi, nil);
     
    std::cout << takahashi.use_count() << std::endl;
    
    show(nil);
    
    erase(ito);

    show(nil);

    std::cout << "exiting -main-" << std::endl;
}
