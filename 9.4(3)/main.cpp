#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int Number=rand()%100+1,CNumber,Times=3;
        while(Times){
            cout<<"Please input CNumber:";
            cin>>CNumber;
            if(CNumber>Number)
                cout<<"Bigger!";
            else if(Number>CNumber)
                cout<<"Samller!";
            else{
                cout<<"Exactly!";
                break;
            }
            --Times;
        }
    if(Times==0)
        cout<<"Failure!";
    return 0;
}
