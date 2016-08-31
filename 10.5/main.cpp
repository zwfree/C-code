#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int* growArray(int* Array,int *size_a)
{
    *size_a*=2;
    int* New_Array=new int[*size_a];
    for(int i=0;i<*size_a;i++)
    {
        New_Array[i]=Array[i];
    }
    delete Array;
    return New_Array;
}
void *display(int* Array,int size_a)
{
    for(int i=0;i<size_a;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
int find_index_smallestValue(int* Array,int i,int size_a)
{
    int index_smallestValue=i;
    for(int j=i+1;j<size_a;j++)
    {
        if(Array[j]<Array[index_smallestValue])
            index_smallestValue=j;
    }
    return index_smallestValue;
}
void swap_index(int *Array,int i,int index)
{
    int temp=Array[i];
    Array[i]=Array[index];
    Array[index]=temp;
}
void sort_Array(int* Array,int size_a)
{
    for(int i=0;i<size_a;i++)
    {
        int index=find_index_smallestValue(Array,i,size_a);
        swap_index(Array,i,index);
    }
}
bool if_sort(int *Array,int size_a)
{
    for(int i=0;i<size_a-2;i++)
    {
        if(Array[i]>Array[i+1])
            return false;
    }
    return true;
}

int main()
{
    srand(time(NULL));
    int size_a=rand()%50+1;
    cout<<"size_a= "<<size_a<<endl;
    int* Array=new int[size_a];  //任意大小的数组
    for(int i=0;i<size_a;i++)
    {
        Array[i]=rand()%100;
    }
  /*  if(size_a<=10)
        {
           for(int i=0;i<size_a;i++)
            {
                Array[i]=rand()%100;
            }
        }
    else
    {   int i=1;
        int *Array=new int[size_a];
        while(i<size_a%10+1){
            //New Array??????
           Array=growArray(Array,size_a);
        }
    }          */
    cout<<"Sort before:"<<endl;
    display(Array,size_a);
    cout<<"if_sort(0:non-sorting, 1:sorting): "<<if_sort(Array,size_a)<<endl;
    sort_Array(Array,size_a);
    cout<<"Sort finished:"<<endl;
    display(Array,size_a);
    cout<<"if_sort(0:non-sorting, 1:sorting): "<<if_sort(Array,size_a)<<endl;
    return 0;
}
