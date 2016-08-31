//未排序和去重，后期可更改
#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

bool Isprime(int i);
int main()
{
    int A[1000],j=0;
    for(int i=1;i<=1000;++i){
        if(Isprime(i)){
            A[j]=i;
            ++j;
        }
    }
    int number=j;
    cout<<"number="<<number<<endl;
    int B[1000],h=0;
    for(int k=0;k<number;++k){  //事实上，仅能取2，因奇数之和是奇数
        for(int l=k+1;l<number;++l){
            int C=A[k]+A[l];  //常数C
            if(Isprime(C))
               {
               B[h]=A[k];
               B[h+1]=A[l];
               h+=2;
               }
        }
    }
  //  unique(B[]);
  cout<<"h="<<h<<endl;
for(int i=0;i<h;++i){
     cout<<B[i]<<"\n";
}
    cin.get();
    return 0;
}
bool Isprime(int i){
    if(i>=4){
    for(int j=2;j<=pow(i,1.0/2.0);++j){
        if(i%j==0)
            return false;
    }
    return true;
    }
    else if(i==1)
        return false;
    else
        return true;
}
