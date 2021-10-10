#include <iostream>
using namespace std;
class marks;

class student
{
    int roll;
    char name[25];
    friend void display(student, marks);

public:
    void indata()
    {
        cout << "Enter Roll No. and Name: ";
        cin >> roll >> name;
    }
    void disp(marks);
};

class marks
{
    int m1, m2, m3, av;

public:
    void inmarks()
    {
        cout << "Enter marks m1,m2,m3: ";
        cin >> m1 >> m2 >> m3;
        av = m1 + m2 + m3;
        av = av / 3;
    }
    friend void display(student, marks);
    friend void student::disp(marks);
};

void student ::disp(marks m)
{
    cout << roll << "\t\t" << name << "\t\t" << m.av << endl;
}

void display(student s, marks m)
{
    cout << s.roll << "\t\t" << s.name << "\t\t" << m.av << endl;
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s[n];
    marks m[n];

    for (int i = 0; i < n; i++)
    {
        s[i].indata();
        m[i].inmarks();
    }
    cout << "-----------------------------------------" << endl;
    cout << "Using common friend function: " << endl;
    cout << endl;
    cout << "Roll No.\tName\tAverage marks" << endl;
    for (int i = 0; i < n; i++)
    {
        display(s[i], m[i]);
    }
    cout << "-----------------------------------------" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Using member friend function of student: " << endl;
    cout << endl;
    cout << "Roll No.\tName\tAverage marks" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].disp(m[i]);
    }
    return 0;
}
