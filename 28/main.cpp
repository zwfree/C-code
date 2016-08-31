#include <iostream>
#include<fstream>
#include<cstdlib>
#include<typeinfo>
using namespace std;
void getNumber(int cur_pos);
int main()
{
   /* ofstream file_writer("highscores.txt");
    if(!file_writer.is_open())
    {
        cout<<"Could not open file!"<<endl;
        return 0;
    }
    for(int i=0;i<10;i++)
    {
        file_writer<<10-i<<endl;
    }*/
    ifstream file_reader("highscores.txt");
    if(!file_reader.is_open())
    {
        cout<<"Could not!";
        return 0;
    }
    int cur_pos=0;
    while(!file_reader.eof())
    {
        getNumber(cur_pos);
        cur_pos++;
    }
    return 0;
}
void getNumber(int cur_pos)
{
    ifstream file_reader.seekg(0,cur_pos);
    int number;
    while(file_reader>>number)
        cout<<number<<endl;
    int cur_pos=file_reader.tellg();
}
