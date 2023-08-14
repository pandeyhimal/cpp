#include<iostream>
#include<math.h>
using namespace std;

class cube
{
    public:
    int length;
    void input()
    {
        cout << " Enter the length of cube:";
        cin >> length ;
    }
    void displayvolume()
    {
        cout << " The volume of cube is " << pow (length,3);
    }
};

int main()
{
    cube a1;
    a1.input();
    a1.displayvolume();
    return 0;
}