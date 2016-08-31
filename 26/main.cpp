#include <iostream>

using namespace std;
class Drawable
{
public:
    Drawable(const string &val);
    virtual void draw();
};
class ship:public Drawable
{
public:
    ship():Drawable("v"){}
   //virtual void draw();
};

void Drawable::draw()
{
    cout<<"*"<<endl;
}/*
void ship::draw()
{
    cout<<"ship"<<endl;
}

vector<Drawable*> drawables;
drawables.pushback(new Ship());
drawables>pushback(new Enemy());
for(vector<int>::iterator itr=drawables.begin(),end=drawables.end();itr!=end;++itr)
{
    (*itr)->draw();
}*/
class Drawable
{
public:
    virtual void draw()=0;
    virtual ~Drawable();
};
class myDrawable:public Drawable
{
public:
    virtual void draw();
    myDrawable();
    virtual ~myDrawable();
private:
    int *_my_data;
};
myDrawable::myDrawable()
{
    _my_data=new int;
}
myDrawable::~myDrawable()
{
    delete _my_data;
}
void deleteDrawable(Drawable* drawable)
{
    delete drawable;
}
class node
{
public:
    node();
private:
    static int _getNumber();
    static int _nextNumber;
    int _Number;
};
static int node::_nextNumber=0;
node::node():_Number(_getNumber())
{

}
int node::_getNumber()
{
    return _nextNumber;
}
int main()
{
    ship s;
    s.draw();
    deleteDrawable(new myDrawable());
    return 0;
}
