#include <iostream>
#include<windows.h>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream file_reader("C:\myfile.txt");
    if(! file_reader.is_open())
    {
        cout<<"could not open file!"<<"/n";
    }
    int number;
    file_reader>>number;
    cout<<number<<endl;
    system("pause");
    return 0;
}
