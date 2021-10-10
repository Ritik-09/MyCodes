#include<iostream>
using namespace std;

class student
{
    char rno[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    public:
    void data();
    void average();
    void display();
};
void student::data()
{
    cout<<"Enter the Student Roll Number : ";
    cin>>rno;
    cout<<"Enter the Student Name: ";
    cin>>name;
    cout<<"Enter the marks in three subjects: ";
    cin>>m1>>m2>>m3;
}
void student::average()
{
    avg=(m1+m2+m3)/3;
}
void  student::display()
{
    cout<<"Rollno is "<<rno<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Mark1 is "<<m1<<endl;
    cout<<"Mark2 is "<<m2<<endl;
    cout<<"Mark3 is "<<m3<<endl;
    cout<<"Average mark of three subjects is "<<avg<<endl;
    cout<<"------------------------------------------------------"<<endl;
}
int main()
{
    student s[10];
    int n,i;
    cout<<"Enter the number of Students: ";
    cin>>n;
    for(i=0;i<n;i++)
    s[i].data();
    for(i=0;i<n;i++)
    s[i].average();
    for(i=0;i<n;i++)
    s[i].display();
}