#include<iostream>
using namespace std;
typedef int Rank;
#define DEFAULT_CAPACITY 32
class vectorOFINT
{
public:
    //构照类函数
    vectorOFINT();
    vectorOFINT(int c);
    ~vectorOFINT();
    vectorOFINT(const vectorOFINT &other);
    vectorOFINT& operator=(const vectorOFINT& other);
    //只读接口
    int get(const Rank r);
    void show();
    //可写接口
    void set(Rank r,int &e);
    void pushback(int &e);
    void pushfront(int &e);
protected:
    void expand();
    void copyFrom(int* vec,Rank low,Rank high);
private:
    int* _elem;
    Rank _size;
    int _capacity;
};

int main()
{
    vectorOFINT vec(2);
    int e=1,a=10;
    vec.pushback(e);
    vec.pushback(e);
    vec.pushback(e);
    cout<<"vec: ";
    vec.show();
    vec.pushfront(a);
    vec.set(2,a);
    cout<<"vec: ";
    vec.show();
    vectorOFINT v1;
    v1=vec;
    cout<<"v1:"<<" ";
    v1.show();
    v1.set(1,a);
    cout<<"v1: ";
    v1.show();
    cout<<"vec: ";
    vec.show();
    vectorOFINT v2(v1);
    cout<<"v2: ";
    v2.show();
    return 0;
}
vectorOFINT::vectorOFINT()
{
    _capacity=DEFAULT_CAPACITY;
    _size=0;
    _elem=new int[_capacity];
  //  for(int i=0;i<_size;i++)
    //    _elem[i]=0;
}
vectorOFINT::vectorOFINT(int c):_capacity(c)
{
    _size=0;
    _elem=new int[_capacity];
}
vectorOFINT::~vectorOFINT()
{
    delete [] _elem;
}
vectorOFINT& vectorOFINT::operator=(const vectorOFINT& other)
{
    if(_elem) delete []_elem;
    copyFrom(other._elem,0,other._size);
   // delete []other._elem;
    return *this;
}
vectorOFINT::vectorOFINT(const vectorOFINT& other)
{
    _capacity=other._capacity;
    _size=other._size;
    _elem=new int[_capacity];
    for(int i=0;i<_size;i++)
    {
        _elem[i]=other._elem[i];
    }
}
void vectorOFINT::expand()
{
    if(_size<_capacity) return;
    if(_capacity<DEFAULT_CAPACITY) _capacity=DEFAULT_CAPACITY;
    int* oldElem=_elem;
    _elem=new int[_capacity<<1];
    for(int i=0;i<_size;i++)
    {
        _elem[i]=oldElem[i];
    }
    delete [] oldElem;
}
void vectorOFINT::copyFrom(int*vec,Rank low,Rank high)
{
    _elem=new int[_capacity=2*(high-low)];
    _size=0;
    while(low<high)
    {
        _elem[_size++]=vec[low++];
    }
}
void vectorOFINT::show()
{
    for(int i=0;i<_size;i++)
    {
        cout<<_elem[i]<<" ";
        if(i!=0&&i%10==0) cout<<endl;
    }
    cout<<endl;
}
int vectorOFINT::get(const Rank r)
{
    return _elem[r];
}
void vectorOFINT::set(Rank r,int &e)
{
    _elem[r]=e;
}
void vectorOFINT::pushback(int &e)
{
        //if(_capacity<=_size)
    expand();
    _elem[_size]=e;
    _size++;
}
void vectorOFINT::pushfront(int &e)
{
        //if(_capacity<=_size)
    expand();
    for(int i=_size;i>0;i--)
    {
        _elem[i]=_elem[i-1];
    }
    _elem[0]=e;
    _size++;
}
