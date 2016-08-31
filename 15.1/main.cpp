#include <iostream>
#include<cstddef>
using namespace std;

struct EnemySpaceShip
{
    int x_cordinate;
    int y_cordinate;
    int weapon_power;
    EnemySpaceShip* p_next_enemy;
};
EnemySpaceShip getnewEnemy()
{
    //EnemySpaceShip p_ship=new EnemySpaceShip;
    EnemySpaceShip p_ship;
    p_ship.x_cordinate=0;
    p_ship.y_cordinate=0;
    p_ship.weapon_power=20;
    p_ship.p_next_enemy=NULL;
    return p_ship;
}
void upgradeWeapon(EnemySpaceShip *p_ship)
{
    p_ship->weapon_power+=10;
}
int main()
{
    EnemySpaceShip p_enemy=getnewEnemy();
    upgradeWeapon(&p_enemy);
    cout<<p_enemy.x_cordinate<<", "<<p_enemy.y_cordinate<<", "<<p_enemy.weapon_power<<endl;
    return 0;
}
