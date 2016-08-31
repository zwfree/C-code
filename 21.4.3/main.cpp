#include <iostream>
#include<math.h>
#include"linked.h"
using namespace std;

enum ope_rator{add,sub,mul,div};

int main()
{
    int c;
    while(1)
    {
        int a,b;
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"Select this operator(0:+; 1:-; 2:*; 3:/):";
        cin>>c;
        switch (ope_rator(c))
        {
        case add:
            cout<<a<<"+"<<b<<"="<<addiction(a,b)<<endl;
            break;
        case sub:
            cout<<a<<"-"<<b<<"="<<subtract(a,b)<<endl;
            break;
        case mul:
            cout<<a<<"*"<<b<<"="<<multiply(a,b)<<endl;
            break;
        case div:
            cout<<a<<"/"<<b<<"="<<divide(a,b)<<endl;
            break;
        default:
            cout<<"Non this operator!"<<endl;
            break;
        }
    }
    return 0;
}
