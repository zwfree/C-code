#ifndef LINKED_H_INCLUDED
#define LINKED_H_INCLUDED
struct node
{
    int key_value;
    node *p_left;
    node *p_right;
};
node* insert(node* p_tree,int key);
node* search(node *p_tree,int key);
node* remove(node* p_tree,int key);
void display(node* p_tree);
void destroy_tree(node* p_tree);
node* find_max(node* p_tree);
node* remove_max_node(node* p_tree,node* p_max_node);
#endif // LINKED_H_INCLUDED
