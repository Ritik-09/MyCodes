
#include <iostream>
using namespace std;

struct student
{
    int roll_no,marks;
    char name[25];
}stud[100],t;
 
int main()
{
    int i,j,n;
    cout<<"Enter the no of students"<<endl;
    cin>>n;
    cout<<"enter student info as roll_no , name , marks"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>stud[i].roll_no>>stud[i].name>>stud[i].marks;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].marks<stud[j+1].marks)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }
    cout<<"Student info in terms of marks from highest to lowest"<<endl;
    cout<<"ROLL_NO\t\tNAME\t\tMARKS\t\tRANK"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<stud[i].roll_no<<"\t\t"<<stud[i].name<<"\t\t"<<stud[i].marks<<"\t\t"<<i+1<<endl;
    }
}