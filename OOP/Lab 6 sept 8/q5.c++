#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int m1, m2, m3, avg;
    char *name;
    friend void display(student);

public:
    student()
    {
        name = new char;
    }
    student(char *na)
    {
        name = new char[strlen(na)];
        strcpy(name, na);
        cout<<"Enter Marks M1,m2 and M3: ";
        cin>>m1>>m2>>m3;
    }
    void average()
    {
        avg = m1 + m2 + m3;
        avg = avg / 3;
    }
};
void display(student s)
{
    cout << s.name << "\t\t" << s.avg << endl;
}

int main()
{
    int n;
    char s[25];
    cout << "Enter Name: ";
    cin >> s;
    student s1(s);
    s1.average();
    cout << "Enter Name: ";
    cin >> s;
    student s2(s);
    s2.average();
    cout << "Name\tAverage marks" << endl;
    display(s1);
    display(s2);
    return 0;
}
