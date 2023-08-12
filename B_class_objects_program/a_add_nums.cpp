#include<iostream>
using namespace std;
class nums
{
    public:
    int a,b,sum;
    void input()
    {
        cout << " Enter any two numbers:";
        cin >> a >> b;

    }
    void display()
    {
       sum = a+b;
        cout << " The sum of " << a << " and " << b << " is " << sum ;
    }
};

int main()
{
    nums s1;
    s1.input();
    s1.display();
    return 0;
}