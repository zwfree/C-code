#include <iostream>
#include<string>
using namespace std;

int main()
{
    string password;
    int times=3;
    cout<<"Please input your password:";
    while(times>0){
       cin>>password;
       if(password=="123456")
          cout<<"Right!";
       else
       {
          cout<<"Wrong,please input your password again:";
          --times;
       }
    }
    if(times==0)
        cout<<"Please input it, after 5 min.";
    return 0;
}
