#include <iostream>
//#include<math.h>
using namespace std;

enum operator_ {add,dec,mul,div};
int main()
{
    double a,b;
    operator_ ope;
    cout<<"Input two number:";
    cin>>a>>b;
    cout<<"Input operator:";
    cin>>ope;
    switch(ope)
    {
    case add:
        cout<<a+b;
        break;
    case dec:
        cout<<a-b;
        break;
    case mul:
        cout<<a*b;
        break;
    case div:
        cout<<a/b;
        break;
    default:
        cout<<"Wrong operator! Input again";
        break;
    }
    return 0;
}
