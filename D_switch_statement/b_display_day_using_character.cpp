// program to display name of day using char data types.
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter any alphabet from A to G:";
    cin >> a;
    char b= (char) tolower(a);
    switch(b)
    {
        case 'a':
        cout << " Sunday ";
        break;
        case 'b':
        cout << " Monday ";
        break;
        case 'c':
        cout << " Tuesday ";
        break;
        case 'd':
        cout << " Wednesday ";
        break;
        case 'e':
        cout << " Thursday ";
        break;
        case 'f':
        cout << " Friday ";
        break;
        case 'g':
        cout << " Saturday ";
        break;
        default:
        cout << " Wrong input ";

    }
    return 0;
}