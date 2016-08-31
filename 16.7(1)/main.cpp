#include <iostream>

using namespace std;
// 正整数乘方运算
int posi_pow(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*posi_pow(x,y-1);
}
//整数乘方运算
double pow(int x,int y)
{
    if(x==0)
    {
        if(y>0)
        {
            return 0;
        }
        else
            cout<<"无意义, 输入有误.";
    }
    else
    {
        if(y>0)
            return posi_pow(x,y);
        else
            return 1.0/posi_pow(x,-y);
    }
}
//正数开方运算

//数开方运算
int main()
{
    int a,b;
    cin>>a>>b;
    cout << pow(a,b)<< endl;
    return 0;
}
