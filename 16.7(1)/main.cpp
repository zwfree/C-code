#include <iostream>

using namespace std;
// �������˷�����
int posi_pow(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*posi_pow(x,y-1);
}
//�����˷�����
double pow(int x,int y)
{
    if(x==0)
    {
        if(y>0)
        {
            return 0;
        }
        else
            cout<<"������, ��������.";
    }
    else
    {
        if(y>0)
            return posi_pow(x,y);
        else
            return 1.0/posi_pow(x,-y);
    }
}
//������������

//����������
int main()
{
    int a,b;
    cin>>a>>b;
    cout << pow(a,b)<< endl;
    return 0;
}
