#include<iostream>
#include"linkedList.h";
using namespace std;

Node *addNode(Node *p_list, int value)
{
	Node *p_new_node = new Node;
	p_new_node->value = value;
	p_new_node->p_next = p_list;
	return p_new_node;
}

void printList(Node* p_list)
{
	Node* p_cur_node = p_list;
	while (p_cur_node != NULL)
	{
		cout << p_cur_node->value << endl;
		p_cur_node=p_cur_node->p_next;
	}
}
