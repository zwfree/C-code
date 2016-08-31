#include <iostream>
#include<math.h>
using namespace std;
void MultiplicationTable(int row,int column);
int main()
{
  int row,column;
  cout<<"Please input row and column: ";
  cin>>row>>column;
  MultiplicationTable(row,column);
   return 0;
}
void MultiplicationTable(int row,int column)
{
    int array[row][column];
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<column;++j)
        {
            array[i][j]=i*j;
        }
    }
     for(int i=0;i<=row;++i)
    {
        if(i=0)
        {
            for(int j=0;j<column;++j)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else
        {
             for(int j=0;j<column;++j)
             {
                 cout<<i<<" ";
                 cout<<array[i-1][j]<<" ";
             }
             cout<<endl;
        }

    }
}
