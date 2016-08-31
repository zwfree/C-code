#include <iostream>

using namespace std;
struct SpaceShip
{
   int x_coordinate;
   int y_coordinate;
   int weapon_power;
   SpaceShip *next_ship;
};
SpaceShip *addNewEnemyTop_list(SpaceShip *p_list)
{
    SpaceShip *EnemyShip=new SpaceShip;
    EnemyShip->x_coordinate=0;
    EnemyShip->y_coordinate=0;
    EnemyShip->weapon_power=0;
    EnemyShip->next_ship=p_list;
    //p_list=EnemyShip;
    return EnemyShip;
   // return p_list;
}
void upgradeWeapons(SpaceShip *EnemyShip)
{
    EnemyShip->weapon_power+=10;
}
int main()
{
    SpaceShip *p_list=NULL;
    for(int i=0;i<10;++i)
    {
       p_list=addNewEnemyTop_list(p_list);
    }
    SpaceShip *p_current=p_list;
    while(p_current!=NULL)
    {
        upgradeWeapons(p_current);
        cout<<p_current->weapon_power<<endl;
        p_current=p_current->next_ship;

    }
    return 0;
}
