#include<iostream>
using namespace std;
int main()
{
    double si,p,r,t;
    cout << " Enter principal, rate and time:";
    cin >> p >> r >> t;
    si = (p*t*r)/100;
    cout << " Simple interest = " << si;
    return 0;
}