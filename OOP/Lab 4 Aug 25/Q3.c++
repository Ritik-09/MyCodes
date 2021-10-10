#include <iostream>
using namespace std;

class employe
{
    int id, age;
    char name[25], depa[25];

public:
    void getdetails()
    {
        cin >> id >> name >> age >> depa;
    }
    void display()
    {
        cout << id << "\t\t" << name << "\t\t" << age << "\t\t" << depa << endl;
    }
};

int main()
{
    int i, j, n;
    cout << "Enter the no of employee" << endl;
    cin >> n;
    employe emp[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter employe info as ID, Name, Age, Department name" << endl;
        emp[i].getdetails();
    }
    cout << "ID\t\tNAME\t\tAge\t\tDEPARTMENT" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    for (i = 0; i < n; i++)
    {
        emp[i].display();
    }
}