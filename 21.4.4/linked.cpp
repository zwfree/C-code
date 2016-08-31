#include <iostream>
#include"linked.h"

using namespace std;
//-------------------����---------------------------------
node* insert(node* p_tree,int key)
{
    //�������������Ǵﵽ��һ�ſ�������Ҫ���ڵ��������
    if(p_tree==NULL)
    {
        node* p_new_tree=new node;
        p_new_tree->p_left=NULL;
        p_new_tree->p_right=NULL;
        p_new_tree->key_value=key;
        return p_new_tree;
    }
    //�����½ڵ����������������������
    //ȡ�����½ڵ��ֵ
    if(key<p_tree->key_value)
    {
        p_tree->p_left=insert(p_tree->p_left,key);
    }
    else
    {
        p_tree->p_right=insert(p_tree->p_right,key);
    }
    return p_tree;
}

//--------------------����-------------------------------
node* search(node *p_tree,int key)
{
    //����ﵽ��һ�ſ���������key�����������
    if(p_tree==NULL)
    {
        return NULL;
    }
    else if(key==p_tree->key_value)
    {
        return p_tree;
    }
    //���򣬳���������������������Ѱ��
    else if(key<p_tree->key_value)
    {
        return search(p_tree->p_left,key);
    }
    else
        return search(p_tree->p_right,key);
}

//----------------ɾ����----------------------------------
void destroy_tree(node* p_tree)
{
    if(p_tree!=NULL)
    {
        destroy_tree(p_tree->p_left);
        destroy_tree(p_tree->p_right);
        delete p_tree;
    }
}

//-----------------------ɾ���ڵ�-------------------------------
node* remove(node* p_tree,int key)
{
    if(p_tree==NULL)
    {
        return NULL;
    }
    if(p_tree->key_value==key)
    {
        if(p_tree->p_left==NULL)
        {
            node* p_right_subtree=p_tree->p_right;
            delete p_tree;
            return p_right_subtree;
        }
        if(p_tree->p_right==NULL)
        {
            node* p_left_subtree=p_tree->p_left;
            delete p_tree;
            return p_left_subtree;
        }
        node* p_max_node=find_max(p_tree->p_left);
        p_max_node->p_left=remove_max_node(p_tree->p_left,p_max_node);
        p_max_node->p_right=p_tree->p_right;
        delete p_tree;
        return p_max_node;
    }
    else if(key<p_tree->key_value)
    {
        p_tree->p_left=remove(p_tree->p_left,key);
    }
    else
    {
        p_tree->p_right=remove(p_tree->p_right,key);
    }
}
//-------------------��ʾ------------------------------------
void display(node* p_tree)
{
    if(p_tree==NULL)
    {
        cout<<" "<<endl;
    }
    if((p_tree->p_left==NULL)&&(p_tree->p_right==NULL))
    {
        cout<<p_tree->key_value<<endl;
    }
       display(p_tree->p_left);
       cout<<p_tree->key_value<<endl;
       display(p_tree->p_right);
}
