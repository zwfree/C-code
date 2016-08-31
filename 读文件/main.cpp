#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream myfile("myfile.txt");
    if(!myfile.is_open())
    {
        cout<<"Could not open file"<<endl;
        return 0;
    }
    char x;
    while(myfile.get(x))
    {
        cout<<x;
    }
    return 0;
}
