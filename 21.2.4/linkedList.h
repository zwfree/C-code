#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct Node
{
	Node *p_next;
	int value;
};
Node *addNode(Node *p_list, int value);
void printList(Node *p_list);

#endif // LINKEDLIST_H_INCLUDED
