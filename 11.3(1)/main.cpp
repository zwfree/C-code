#include <iostream>
#include<string>
using namespace std;
struct Formation
{
    string name;
    string addr;
    string phone;
};

int main()
{
    Formation myformation;
    cin>>myformation.name;
    cin>>myformation.addr;
    cin>>myformation.phone;
    cout << "  name  " << "  addr  "<<"  phone  "<<endl;
    cout<<" "<<myformation.name<<" "<<myformation.addr<<" "<<myformation.phone<<" "<<endl;
    return 0;
}
