#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int sizes;
   sizes=1;
   double R;
   vector<double> R_n(sizes)={1};
   int n;
   int acount=0;
   while(cin>>R>>n)
   {
       for(int i=1;i<=n;i++)
       {
           R_n[acount]*=R;
       }
       acount++;
       if(acount>=sizes)
       {
           sizes++;
           R_n[acount]=1;
       }
   }
   for(int i=0;i<acount;i++)
   {
       while()
       {
           if(R_n[i]
       }

       cout<<R_n[i]<<"\n";
   }
    return 0;
}


/*
struct NumCouple
{
    double R;
    int n;
};

NumCouple* input()
{
    NumCouple *p_R_n=new NumCouple[6];
    int i=0;// acount=0;
    while(i<6)
    {
        cin>>p_R_n[i].R;
        cout<<" ";
        cin>>p_R_n[i].n;
    //    acount++;
        i++;
    }
    return p_R_n;
}

void compute(NumCouple &p_R_n)
{
    double outs[6]={1,1,1,1,1,1};
    int i=0;
    while(i<6)
    {
        for(int j=1;j<=p_R_n[i].n;j++)
        {
            outs[i]*=*p_R_n[i].R
        }
        cout<<outs[i]<<"\n";
        i++;
    }
}

void output(double outs)
{
   for(int i=0;i<6;i++)
   {
        cout<<outs[i]<<"\n";
   }
}*/
