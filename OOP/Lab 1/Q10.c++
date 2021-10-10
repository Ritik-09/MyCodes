
#include <iostream>
using namespace std;

struct employe
{
    int id,sal;
    char name[25],dob[10];
}emp[100],t;
 
int main()
{
    int i,j,n;
    cout<<"Enter the no of employee"<<endl;
    cin>>n;
    cout<<"enter employe info as ID, Name, DOB, Basic Salary"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>emp[i].id>>emp[i].name>>emp[i].dob>>emp[i].sal;
       
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(emp[j].sal>emp[j+1].sal)
            {
                t=emp[j];
                emp[j]=emp[j+1];
                emp[j+1]=t;
            }
        }
    }
    cout<<"Employe info in terms of Basic Salary from lowest to highest"<<endl;
    cout<<"ID\t\tNAME\t\tDOB\t\tSalary"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<emp[i].id<<"\t\t"<<emp[i].name<<"\t\t"<<emp[i].dob<<"\t\t"<<emp[i].sal<<endl;
        
    }
}