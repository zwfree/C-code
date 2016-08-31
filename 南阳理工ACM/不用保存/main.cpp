#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    double sum=0;
    for(int i=0;i<=N;i++)
    {
        sum=sum+sin(i);
    }
    cout<<sum<<endl;
    Time();
    return 0;
}
