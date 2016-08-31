#include <iostream>
#include"linkedList.h"
using namespace std;

int main()
{
    Node *p_list=NULL;
    for(int i=0;i<10;++i)
    {
        int value;
        cout<<"Enter the value for list node:";
        cin>>value;
        p_list=addNode(p_list,value);
    }
    printList(p_list);
    return 0;
}
