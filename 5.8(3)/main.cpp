#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i=1;i<=20;++i)
    {
        sum+=i*i;
    }
    cout << sum << endl;
    return 0;
}
