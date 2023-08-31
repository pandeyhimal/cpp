//program to take length and breadth from user and display area and perimeter of rectangle.
#include<iostream>
using namespace std;
class apr
{
    public:
    int length, breadth , area, perimeter;
    void input()
    {
        cout << " Enter length and breadth:";
        cin >> length >> breadth ;
    }
    void display()
    {
        area = length * breadth;
        perimeter = 2*( length + breadth);
        cout << " The area of rectangle  is " << area << endl;
        cout << " The perimeter of rectangle is " << perimeter;

    }
};

int main()
{
    apr a1;
    a1.input();
    a1.display();
    return 0;
}