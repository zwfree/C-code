#include <iostream>
#include<iomanip>
#include<windows.h>
using namespace std;

int main()
{
    const char last_fill=cout.fill('-');
    cout<<setw(10)<<"A"<<setw(10)<<"B"<<setw(10)<<"C"<<endl;
    cout.fill(last_fill);
    cout<<setw(10)<<"D"<<endl;
    system("pause");
    return 0;
}
