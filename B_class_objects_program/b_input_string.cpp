//program to display name using oop method.
#include<iostream> 
using namespace std;
class cls
{
    public:
    string name;
    void inputname()
    {
        cout << " Enter your name:";
        cin >> name;
    }
    void displayname()
    {
        cout << " Your name is " << name;
    }

};

int main()
{
    cls a1;
    a1.inputname();
    a1.displayname();
    return 0;
}