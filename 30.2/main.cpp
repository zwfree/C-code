#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct person
{
    person(const string& firstname,const string& lastname):_firstname(firstname),_lastname(lastname){}
    string _firstname;
    string _lastname;
};
int main()
{
    vector<person> people;
    people.push_back(person("Joe","Smith"));
    people.push_back(person("Tonya","Malligans"));
    people.push_back(person("Jerome","Noboggins"));
    people.push_back(person("Mary","Suzie-Purple"));
    int firstname_max_width=0;
    int lastname_max_width=0;
    for(vector<person>::iterator itr=people.begin(),end=people.end();itr!=end;itr++)
    {
        if(firstname_max_width<itr->_firstname.length())
            firstname_max_width=itr->_firstname.length();
        if(lastname_max_width<itr->_lastname.length())
            lastname_max_width<itr->_lastname.length();
    }
    for(vector<person>::iterator itr=people.begin(),end=people.end();itr!=end;itr++)
    {
        cout<<setw(firstname_max_width)<<left<<itr->_firstname;
        cout<<" ";
        cout<<setw(lastname_max_width)<<left<<itr->_lastname;
        cout<<endl;
    }
    return 0;
}
