#include <iostream>
#include"linked.h"

using namespace std;
node* find_max(node* p_tree)
{
    if(p_tree==NULL)
    {
        return NULL;
    }
    if(p_tree->p_right==NULL)
    {
        return p_tree;
    }
    return find_max(p_tree->p_left);
}
node* remove_max_node(node* p_tree,node* p_max_node)
{
    if(p_tree==NULL)
    {
        return NULL;
    }
    if(p_tree==p_max_node)
    {
        return p_max_node->p_left;
    }
    p_tree->p_right=remove_max_node(p_tree->p_right,p_max_node);
    return p_tree;
}
