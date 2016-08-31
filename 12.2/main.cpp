#include <iostream>
#include<string>
using namespace std;

class Screen
{
public:
    typedef string ::size_type index;
    char get() const {return contents[cursor];}
    inline char get(index ht,index wd) const;
    index get_cursor() const;
    Screen(index hght,index wdth,const string &cntnts);
    Screen &move(index r,index c);
    Screen &set(char c);
    Screen &display(ostream &os);
private:
    string contents;
    index cursor;
    index height,width;
};
Screen::Screen(index hght,index wdth,const string &cntnts):
    contents(cntnts),cursor(0),height(hght),width(wdth){}
char Screen::get(index ht,index wd) const
{
    index row=ht*width;
    return contents[row+wd];
}
inline Screen::index Screen::get_cursor() const
{
    return cursor;
}
Screen& Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}
Screen& Screen::move(index r,index c)
{
    index row=r*width;
    cursor=row+c;
    return *this;
}
Screen& Screen::display(ostream &os)
{
    os<<contents;
    return *this;
}
int main()
{
    Screen myScreen(5,6,"aaaaa\naaaaa\naaaaa\naaaa\naaaa\n");
    myScreen.move(4,0).set('#').display(cout);
    return 0;
}

