//program to display even number in decreasing order using while,continue and break statement.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter any number: " ;
    cin >> n;
    if(n%2==0)
        cout << n << endl;
    while(true)
    {
        n--;
        if(n%2!=0){
            continue;
        }
        else {
            cout <<  n  << endl;
        }
        if(n<=2)    
            break;
    }
    return 0;
}