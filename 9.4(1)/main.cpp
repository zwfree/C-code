#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int i=0,ammount,sum_zero=0,sum_eye=0;
    cout<<"Please input ammount:";
    cin>>ammount;
    for(int j=1;j<=ammount;j++)
    {
        if(rand()%2==0)
        {
            sum_zero++;
        }
        else
        {
            sum_eye++;
        }
        cout<<rand()%2<<" ";
        if(j%10==0)
            cout<<endl;
    }
    cout<<"sum_zero="<<sum_zero<<"  sum_eye="<<sum_eye<<endl;
    return 0;
}
