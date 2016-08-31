
#include <iostream>
#include<math.h>
using namespace std;
int change(int x){
  x+=4;
  return x;
}

int main()
{
    int y=4;
    change(y);
    cout<<y;
    return 0;
}
