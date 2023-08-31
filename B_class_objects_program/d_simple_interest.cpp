// program to display simple interest by taking principle, rate and time form user.
#include <iostream> 
using namespace std;
class siptr
{
    public:
    double si, p;
    int t;
    float r;
    void inputnums()
    {
        cout << " Enter principle, rate and time:";
        cin >> p >> t >> r ;
    }
    void displaynums()
    {
        si = (p*t*r)/100;
        cout << " The simple interest is " << si ;
    }
};

int  main()
{
    siptr a1;
    a1.inputnums();
    a1.displaynums(); 
    return 0;
}
