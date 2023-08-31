// program to display even number in decreasing order using for loop in oop method.
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
        for(int i=n; i>=1; i--)
        {
            if(i%2==0)
                cout << i << endl;
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