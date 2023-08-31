//program to display even number in decreasing order using for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter any number: ";
    cin >> n;
    for(int i=n; i>=2; i--)
    {
        if(i%2!=0)
        {
            continue;
        }
        else 
        {
            cout << i << endl;
         }
        
    }
    return 0;
}