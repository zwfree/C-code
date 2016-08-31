#include <iostream>

using namespace std;
enum operator_a { add_, dec_, mul_, div_ };
int main()
{
    double a,b;
    int ope;
    while(1)
    {
	cout << "Input two number:";
	cin >> a >> b;
	cout << "Input operator(+:0, -:1, *:2, /:3):";
	cin >> ope;
	if(ope==add_)
        cout << a + b<<endl;
    else if(ope==dec_)
        cout << a - b<<endl;
    else if(ope==mul_)
        cout << a*b<<endl;
    else if(ope==div_)
        cout << a / b<<endl;
    else
        cout << "Wrong operator! Input again"<<endl;
    }
    return 0;
}
