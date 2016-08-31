#include <iostream>

using namespace std;
struct linkedListNode
{
    int val;
    int *p_next;
};

class linkedList
{
public:
    linkedList();
    ~linkedList();
    linkedList& perator=(const linkedList& other);
    linkedList(const linkedList& other);
    void inset(int val);
private:
    linkedListNode *_p_head;
};
linkedList::linkedList()
    :p_head(NULL)
{

}
linkedList::~linkedList()
{
    linkedList *p_itr=_p_head;
    while(p_itr!=NULL)
    {
        linkedList *p_tmp=p_itr->p_next;
        delete p_itr;
        p_itr=p_tmp;
    }
}
linkedList& linkedList::perator=(const linkedList& other)
{
    if(this=other)
    {
        return *this;
    }
    delete _p_head;
    _p_head=NULL;
    linkedList *p_itr=other._p_head;
    while(p_itr!=NULL)
    {
        insert(p_itr->val);
        //p_itr=p_itr->p_next;
    }
    return *this;
}
linkedList::linkedList(const linkedList& other)
    :_p_head(NULL)
{
     linkedList *p_itr=other._p_head;
    while(p_itr!=NULL)
    {
        insert(p_itr->val);
        //p_itr=p_itr->p_next;
    }
}
int main()
{
    return 0;
}
