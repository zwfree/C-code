#include <iostream>

using namespace std;

void print_Array(int* Array,int A_size)
{
    if(A_size==0)
        cout<<Array[0];
    else
    {
        if(A_size!=1)
            cout<<Array[A_size-1];
        print_Array(Array,--A_size);
    }
}
int* growArray(int* Array,int A_size)
{
    int* New_Array=new int[A_size*2];
    for(int i=0;i<A_size;++i)
    {
        New_Array[i]=Array[i];
    }
    delete Array;
    return New_Array;
}
int main()
{
    int  A_size=10,next_element=0;
    int* Array=new int[A_size];
    int val;
    while(cin>>val)
    {
        if(A_size==next_element)
        {
            Array=growArray(Array,A_size);
        }
        Array[next_element]=val;
        ++next_element;
    }
    print_Array(Array,next_element);
    return 0;
}
