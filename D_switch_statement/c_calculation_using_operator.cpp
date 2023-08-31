//  program to display calculation using arithmetic operators.
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char opr;
    cout << " Enter any two number:";
    cin >> a >> b;
    cout << " Enter any arithmetic operator:";
    cin >> opr;
    switch(opr)
    {
        case '+':
        cout << " Addition= " << a+b;
        break;
        case '-':
        cout << " Subtraction= " << a-b;
        break;
        case '*':
        cout << " Multiplication= " << a*b;
        break;
        case '/':
        cout << " Division= " << a/b;
        break;
        case '%':
        cout << " Remainder= " << a%b;
        break;
        default:
        cout << " This is not available " << a << opr << b ;
    }
    return 0;
}