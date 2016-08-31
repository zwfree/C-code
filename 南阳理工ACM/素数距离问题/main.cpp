#include <iostream>
#include<math.h>
using namespace std;

bool ifprime(int num)
{
    if(num==2||num==3) return true;
    else if(num<=1) return false;
    else
    {
        int i=2;
        while(i<=sqrt(num))
        {
            if(num%i==0) return false;
            i++;
        }
        return true;
    }
}
int main()
{
    int N;
    cin>>N;
    cout<<"input N: ";
    int num[N],i=0;
    while(i<N)
    {
        cin>>num[i];
        i++;
    }
    i=0;
    while(i<N)
    {
        if(num[i]<=0) break;
        if(ifprime(num[i]))
        {
            cout<<num[i]<<" "<<0<<endl;
        }
        else
        {
            int left_d=0,right_d=0,num_right=num[i];
            while(num[i]--)
            {
                left_d++;
                if(ifprime(num[i]))
                {
                    break;
                }
            }
            while(num_right++)
            {
                right_d++;
                if(ifprime(num_right))
                {
                    break;
                }
            }
            if(num[i]==-1||left_d>right_d) cout<<num_right<<" "<<right_d<<endl;
            else cout<<num[i]<<" "<<left_d<<endl;
        }
        i++;
    }
    return 0;
}
