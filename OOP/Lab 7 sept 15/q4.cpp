#include <iostream>
using namespace std;

class company{
    char namec[25];
    int year;
    public:
        void getdata(){
            cout<<"Enter name and year of establishment of company: ";
            cin>>namec>>year;
        }
};

class employee: public company{
    char name[25],desig[25];
    int age,empc;
    public:
        void getdetails(){
            cout<<"Enter name , age , designation and employee code: ";
            cin>>name>>age>>desig>>empc;
        }
        void display(){
            cout<<"Name: "<<name<<"\nAge: "<<age<<"\nDesignation: "<<desig<<"\nEmployee code: "<<empc;
        }
};

class department: public company{
    char depname[25];
    int noemp,deptid;
    public:
        void setdata(){
            cout<<"Enter department name, number of employee and department id: ";
            cin>>depname>>deptid;
        }
        void display(){
            cout<<"\nDepartment Name: "<<depname<<"\nDepartment ID: "<<deptid;
        }
};
int main(){
    employee emp;
    department dep;
    emp.getdata();
    emp.getdetails();
    dep.setdata();
    emp.display();
    dep.display();
    return 0;
}