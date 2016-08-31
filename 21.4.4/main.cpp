#include <iostream>
#include"linked.h"

using namespace std;

int main()
{
    node* thistree=NULL;
    insert(thistree,10);
    insert(thistree,5);
    insert(thistree,8);
    //remove(thistree,5);
    display(thistree);
   // destroy_tree(thistree);
    return 0;
}
