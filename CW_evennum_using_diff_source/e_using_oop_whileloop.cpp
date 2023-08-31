// program to display even number in decreasing order using while loop in oop method.
#include<iostream>
using namespace std;

class even
{
    public:
    int n;
    void input()
    {
        cout << " Enter any number:";
        cin >> n;
    }
    void display()
    {
        if(n%2==0)
            cout << n << endl;
        while(true)
        {
            n--;
            if(n%2!=0)
                continue;
            else if (n<=1)
                break;
            else
                cout << n << endl;
        }
    }
};

int main()
{
    even h2;
    h2.input();
    h2.display();
    return 0;
}
