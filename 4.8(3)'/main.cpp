#include <iostream>

using namespace std;
enum operator_a { add_, dec_, mul_, div_ };
int main()
{
    double a, b;
    int ope_;
    while(1){
	cout << "Input two number:";
	cin >> a >> b;
	cout << "Input operator(+:0, -:1, *:2, /:3):";
	cin>>ope_;
	operator_a ope=operator_a(ope_);
	switch(ope)
	{
	case add_:
		cout << a + b<<endl;
		break;
	case dec_:
		cout << a - b<<endl;
		break;
	case mul_:
		cout << a*b<<endl;
		break;
	case div_:
		cout << a / b<<endl;
		break;
	default:
		cout << "Wrong operator! Input again"<<endl;
		break;
	}
    }
    return 0;
}
