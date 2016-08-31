#include <iostream>
#include<math.h>
#include<windows.h>
using namespace std;
void out_even(int *n,int a);
void decompose(int n,int *p1,int *p2,int *p3);
bool L_complete_num(int n,int a,int *p1,int *p2,int *p3);
int main()
{
    int up_bound,amount=0;
    cout<<"Input upper bound:";
    cin>>up_bound;
    int n=210,a=1;
    while(n<=up_bound)
    {
        int p1=0,p2=0,p3=0;
        int N=n;
        cout<<"先去偶：";
        out_even(&N,a);
        decompose(N,&p1,&p2,&p3);
        cout<<"是不是L完美数(1:Yes, 0:No):"<<L_complete_num(n,a,&p1,&p2,&p3)<<endl;
        if(L_complete_num(n,a,&p1,&p2,&p3))
        {
            amount++;
        }
        n++;
    }
    cout<<"amount="<<amount<<endl;
    system("pause");
    return 0;
}

void out_even(int *n,int a)
{
    while(1)
    {
        if(*n%2==0)
        {
            a++;
            *n=*n/2;
        }
        else
        {
            break;
        }
    }
    cout<<"n 去偶之后为："<<*n<<" a="<<a<<endl;
}

void decompose(int n,int *p1,int *p2,int *p3)
{
    int i=3;
    while(i<n)
    {
        if(n%i==0)
        {
            *p1=i;
            break;
        }
        i+=2;
    }
    if(i==n)
    {
        *p1=1;
    }
    i++;
    while(i<n)
    {
        if(n%i==0)
        {
            *p2=i;
            break;
        }
        i++;
    }
    if(i==n)
    {
        *p2=1;
    }
    i++;
    while(i<n)
    {
        if(n%i==0)
        {
            *p3=i;
            break;
        }
        i++;
    }
    if(i==n)
    {
        *p3=1;
    }
    if(n==*p1**p2**p3)
    {
        cout<<"p1="<<*p1<<" p2="<<*p2<<" p3="<<*p3<<endl;
    }
}

bool L_complete_num(int n,int a,int *p1,int *p2,int *p3)
{
    int Fan=(pow(2,a-1)-1)*(*p1+1)*(*p2+1)*(*p3+1);
    int b=1;
    while(b<=a)
    {
        if((Fan-2*n==pow(2,b))||(Fan-2*n==pow(2,b)**p1)||(Fan-2*n==pow(2,b)**p2)||(Fan-2*n==pow(2,b)**p3)||(Fan-2*n==pow(2,b)**p1**p2)||(Fan-2*n==pow(2,b)**p1**p3)||(Fan-2*n==pow(2,b)**p2**p3)||(Fan-2*n==pow(2,b)**p1**p2**p3))
        {
            int d=Fan-2*n;
            cout<<"d="<<d<<"  ";
            cout<<n<<"="<<pow(2,a-1)<<"*"<<*p1<<"*"<<*p2<<"*"<<*p3<<"+"<<d<<endl;
            return 1;
        }
        b++;
    }
    return 0;
}
