// wap to enter marks of 5 subjects and display total  marks and percentage, division of pass stuents.
#include<iostream>
using namespace std;

class result
{
    int en,sc,so,ne,ma;
    public:
    void input()
    {
        cout << " Enter the marks of english, science, social, nepali and math respectively" << endl;
        cin >> en >> sc >> so >> ne >> ma ;

    }
    void display()
    {
        cout << " Total marks= " << 5*100 << endl;
        float obtmarks= en+sc+so+ne+ma;
        cout << " Obtained marks= " << obtmarks << endl;
        if(en>=40 && sc>=40 && so>=40 && ne>= 40 && ma>=40)
        {
            double percentage = (obtmarks/500)*100;
            cout << " Percentage = " << percentage << endl;

            if(percentage>=80){
                cout << " Distinction " << endl;
            }
            else if (percentage>=60){
                cout << " First division " << endl;
            }
            else if (percentage>= 50){
                cout << " Second division " << endl;
            }
            else if (percentage>= 40){
                cout << " Third division " << endl;
            }
            else {
                cout << " Very low " << endl;   // for percentage less than 40%
            }
        }
        else {
            cout << " You are failed " << endl;
        }

    }

};

int main()
{
    result h1;
    h1.input();
    h1.display();
    return 0;
}