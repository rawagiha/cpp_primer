/*http://www.kuma-de.com/blog/2013-07-17/5689*/

#include <iostream>
#include <memory>
#include <list>
#include <string>

struct Obj
{
    
    static std::shared_ptr<Obj> create_sp(const std::string& name)
    {
        std::shared_ptr<Obj> obj_sp(new Obj(name)); //initialize shared_ptr
        
        obj_sp->m_self = obj_sp; //assing the shared_ptr to a weak ptr (m_self)
                                 //obj_sp's ref_count does not increase
                                // grant m_self access to obj_sp 
        return obj_sp;
    } 


    Obj(const std::string& name) : m_name(name)
    {
        std::cout << m_name << " is constructed." << std::endl;
    }
    
    ~Obj()
    {
         std::cout << m_name << " is destructed." << std::endl;
    }

    //members
    std::string m_name;
    std::weak_ptr<Obj> m_self;
    std::weak_ptr<Obj> m_parent;
    std::list<std::shared_ptr<Obj>> m_children;

    void add_child(const std::shared_ptr<Obj>& child)
    {
        if (std::shared_ptr<Obj> m_parent = child->m_parent.lock())
        {
            throw "already has a child";
            return;
        }

        child->m_parent = m_self;
        m_children.push_back(child);

        std::cout << child->m_name << " is added to " << m_self.lock()->m_name << std::endl;
    }

    void remove_child(const std::shared_ptr<Obj>& child)
    {
        auto it = m_children.begin();
        
        while (it != m_children.end())
        {
            if (*it == child)
            {
                child->m_parent.reset(); // m_parent lost access to child
                it = m_children.erase(it);
                std::cout << child->m_name << " is removed from "<< m_self.lock()->m_name << std::endl;
            }
            else it++;
        }
    }

    void update()
    {
        std::cout << m_name << " is updated." << std::endl;
        auto it = m_children.begin();
        while (it != m_children.end())
        {
            (*it)->update();
            ++it; 
        }
    }
};

int main()
{
    std::shared_ptr<Obj> parent = Obj::create_sp("parent");
    {
        std::shared_ptr<Obj> child1 = Obj::create_sp("child1");
        std::shared_ptr<Obj> child2 = Obj::create_sp("child2");
        std::shared_ptr<Obj> grandchild = Obj::create_sp("grandchild");
        
        std::cout << std::endl << "----1" << std::endl;

        parent->add_child(child1);
        parent->add_child(child2);
        child1->add_child(grandchild);

        std::cout << std::endl << "----2" << std::endl;
        
        parent->update();

        std::cout << std::endl << "----3" << std::endl;

        parent->remove_child(child1);
    }
    std::cout << std::endl << "----4" << std::endl;
}   
