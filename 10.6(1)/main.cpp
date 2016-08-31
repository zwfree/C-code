#include <iostream>

using namespace std;

void Insert_sort(int *p_array[],int size_a)
{
    int temp_array[10];
     temp_array[0]=p_array[0];
    for(int i=1;i<size_a;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]<=temp_array[j])
            {
                for(k=i;k>=j;k--)
                {
                    temp_array[k]=temp_array[k-1];
                }
                temp_array[j]=a[i];
            }
        }
    }
    for(int h=0;h<size_a;h++)
    {
        p_array[h]=temp_array[h];
    }
}
int main()
{
    int p_array[10];
    for(int i=0;i<10;++i)
    {
        cin>>p_array[i];
    }
    Insert_sort(p_array,10);
    for(int j=0;j<10;j++)
    {
        cout<<p_array[j]<<" "<<endl;
    }
    return 0;
}
