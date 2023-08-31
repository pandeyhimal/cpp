//program to display even numbers using do while loop, continue and break statement.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter any number: ";
    cin >> n;
    if(n%2==0)
        cout << n << endl;
    do
    {
        n--;
        if(n%2!=0)
            continue;

        else
            cout << n << endl;

        if(n<=2)
            break;
    
    } while (true);
    return 0;
}