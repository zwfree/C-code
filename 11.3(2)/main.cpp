#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

struct SpaceShip{
  string name;
  int x_ship;
  int y_ship;
};
enum Direction{left_=1,up_,right_,down_};

SpaceShip x_ChangeShip(SpaceShip myShip){
  ++myShip.x_ship;
  return myShip;
}
SpaceShip xx_ChangeShip(SpaceShip myShip){
  --myShip.x_ship;
  return myShip;
}
SpaceShip y_ChangeShip(SpaceShip myShip){
  ++myShip.y_ship;
  return myShip;
}
SpaceShip yy_ChangeShip(SpaceShip myShip){
  --myShip.y_ship;
  return myShip;
}
int main()
{
    srand(time(NULL));
    SpaceShip myShip;
    myShip.x_ship=rand()%1025;
    myShip.y_ship=rand()%769;
    myShip.name="zw";
    int amount=0;
    Direction thisDirection;
    int This_dir;
    cout<<myShip.name<<endl;
    while(++amount)
    {
        cout<<"Current Position: "<<myShip.x_ship<<" "<<myShip.y_ship<<endl;
    if((0<=myShip.x_ship)&&(myShip.x_ship<=1024)&&(0<=myShip.y_ship)&&(myShip.y_ship<=768))
    {
        cout<<"Input This_dir(1:left, 2:up, 3:right, 4:down):";
        cin>>This_dir;
        thisDirection=Direction(This_dir);
        switch(thisDirection)
        {
        case up_:
            myShip=y_ChangeShip(myShip);
            break;
        case down_:
            myShip=yy_ChangeShip(myShip);
            break;
        case left_:
            myShip=xx_ChangeShip(myShip);
            break;
        case right_:
            myShip=x_ChangeShip(myShip);
            break;
        default:
            break;
        }
    }
    else
    {
        cout<<"You Fail!!";
         break;
    }
    }
    cout<<"step sum: "<<amount<<endl;
    return 0;
}
