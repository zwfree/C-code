#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<"*"<<j<<"="<<setw(2)<<left<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
