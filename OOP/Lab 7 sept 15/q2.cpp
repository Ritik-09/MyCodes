#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int roll;
    int age;

public:
    void getdata()
    {
        cout << "Enter name, roll and age " << endl;
        cin >> name >> roll >> age;
    }
};

class test : public student
{
protected:
    int sub[5];

public:
    void getmark()
    {
        cout << "Enter 5 subjects marks : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> sub[i];
        }
    }
    void details()
    {
        cout << "\nName : " << name << "\nRoll number : " << roll << "\nAge : " << age << endl;
        cout << "Marks in 5 subjects : ";
        for (int i = 0; i < 5; i++)
        {
            cout << sub[i] << " ";
        }
    }
};

class result : protected test
{
    int total;
    float percent;

public:
    void calc()
    {
        getdata();
        getmark();
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += sub[i];
        }
        percent = (total * 100) / 50;
    }
    void display()
    {
        details();
        cout << "\nTotal Marks = " << total << "\nPercentage = " << percent << endl;
    }
};

int main()
{
    result st;
    st.calc();
    st.display();
}
