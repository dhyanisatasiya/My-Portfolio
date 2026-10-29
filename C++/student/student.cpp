#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        string name;
        int m1, m2, m3, total;
        float percentage;

        void input()
        {
            cout << "Enter name: ";
            cin >> name;

            cout << "Enter marks of 3 subjects: ";
            cin >> m1 >> m2 >> m3;
        }

        void calculate()
        {
            total = m1 + m2 + m3;
            percentage = total / 3.0;
        }

        void display()
        {
            cout << "\nName: " << name;
            cout << "\nTotal: " << total;
            cout << "\nPercentage: " << percentage << "%";

            cout << "\nResult: ";

            if (percentage >= 35)
            {
                cout << "Pass";
            }
            else
            {
                cout << "Fail";
            }
        }
};

int main()
{
    Student s1;

    s1.input();
    s1.calculate();
    s1.display();

    return 0;
}
