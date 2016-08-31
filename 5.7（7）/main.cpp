#include<iostream>
using namespace std;

int main()
{
	int a, _sum1=0, _sum2=0, _sum3=0;
	while(cin>>a)
	{
	    if(a==0) break;
		if (a == 1)  _sum1++;
		if (a == 2)  _sum2++;
		if (a == 3)  _sum3++;
	}
	cout << _sum1 << " " << _sum2 << " " << _sum3 << endl;
	for (int i = 1; i <= _sum1 + _sum2 + _sum3; i++)
	{
		cout << "*";
		if (i == _sum1) cout << endl;
		if (i ==_sum1+ _sum2) cout << endl;
	}
    return 0;
}
