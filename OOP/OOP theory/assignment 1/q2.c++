#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    string *name;
    int m1,m2,m3,avg;

public:
    Student(string na,int ma1,int ma2,int ma3)
    {
        name = new string(na);
        m1=ma1;
        m2=ma2;
        m3=ma3;
    }
    ~Student()
    {
        cout << "Destruction of the class\n";
        delete name;
    }
    void display(){
        cout<<"Name: "<<*name<<endl;
        cout<<"Marks: "<<m1<<" "<<m2<<" "<<m3<<endl;
        cout<<"Average Marks: "<<avg<<endl;
    }
    void average(){
        avg=m1+m2+m3;
        avg=avg/3;
    }
};

int main()
{
    int m1,m2,m3;
    string name;
    cout<<"Enter name of student 1: ";
    cin>>name;
    cout<<"Enter marks m1,m2,m3: ";
    cin>>m1>>m2>>m3;
    Student s1(name,m1,m2,m3);
    cout<<"Enter name of student 2: ";
    cin>>name;
    cout<<"Enter marks m1,m2,m3: ";
    cin>>m1>>m2>>m3;
    Student s2(name,m1,m2,m3);
    s1.average();
    s1.display();
    s2.average();
    s2.display();
}