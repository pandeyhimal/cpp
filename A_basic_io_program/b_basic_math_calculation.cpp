// program to display mathmetical operation using pop method.
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,diff,pro,quo;
    cout << " enter any two numbers:";
    cin >> a >> b ;
    sum = a+b;
    diff = a-b;
    pro = a*b;
    quo = a/b;
    cout << " The sum of " << a << " and " << b << " is " << sum << endl;
    cout << " The differenc of " << a << " and " << b << " is " << diff << endl;
    cout << " The product of " << a << " and " << b << " is " << pro << endl;
    cout << " The quotient of " << a << " and " << b << " is " << quo ;
    return 0;
}