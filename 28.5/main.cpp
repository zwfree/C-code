#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(int argc,char* argv[])
{
    if(argc!=1)
    {
        cout<<"usage: "<<argv[0]<<"<filename>"<<endl;
    }
    else
    {
        ifstream the_file("myfile.txt");
        if(!the_file.is_open())
        {
            cout<<"Could not open file"<<argv[1]<<endl;
            return 1;
        }
        char x;
        while(the_file.get(x))
        {
            cout<<x;
        }
        cout<<endl;
        int val=atoi(argv[0]);
        cout<<val*val<<endl;
    }
    return 0;
}
