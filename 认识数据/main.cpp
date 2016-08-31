#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double b[5][1];
    b[0][0]=1.5,b[0][1]=1.7,b[1][0]=2,b[1][1]=1.9,b[2][0]=1.6,b[2][1]=1.8,b[3][0]=1.2,b[3][1]=1.5,b[4][0]=1.5,b[4][1]=1.0,b[5][0]=1.4,b[5][1]=1.6;
    /*for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }*/
    double d[5][5];
    cout<<"Euclidean(0),Manhattan(1),UpperBound(2),Cosine(3):";
    int distance;
    while(1)
    {
    cin>>distance;
     for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)  //似乎不能将“j<=5”改成“j<=i”，猜测原因是输注不能跳过中间的值
        {
            double tmp1=0;
            for(int k=0;k<=1;k++)
            {
                if(distance==0)
                {
                    tmp1+=pow((b[i][k]-b[j][k]),2.0);
                }
                if(distance==1)
                {
                    tmp1+=fabs(b[i][k]-b[j][k]);
                }
                if(distance==2)
                {
                    if(tmp1<fabs(b[i][k]-b[j][k]))
                    {
                        tmp1=fabs(b[i][k]-b[j][k]);
                    }
                }
                if(distance==3)
                {

                }
            }
                if(distance==0)
                {
                    d[i][j]=pow(tmp1,0.5);
                }
                if(distance==1)
                {
                    d[i][j]=tmp1;
                }
                if(distance==2)
                {
                    d[i][j]=tmp1;
                }
        }
    }
     for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
           // cout<<"d["<<i<<"]["<<j<<"]"
            cout<<d[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
    return 0;
}
