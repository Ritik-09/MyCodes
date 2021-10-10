#include <iostream>
using namespace std;

class department
{
private:
    int dep_id;
    char dep_name[25];

public:
    void setValue()
    {
        cout << "\nEnter Department Name: ";
        cin >> dep_name;
        cout << "\nEnter Department ID: ";
        cin >> dep_id;
    }
    void display()
    {
        cout <<"Department Name: "<<dep_name <<endl<< "Department ID: " << dep_id << endl;
    }
};

class employee : public department
{
private:
    char name[25];
    int age, emp_id;

public:
    void getData()
    {
        cout << "\nEnter Employee Name: ";
        cin >> name;
        cout << "\nEnter age: ";
        cin >> age;
        cout << "\nEnter Emp Id: ";
        cin >> emp_id;
    }
    void display()
    {
        cout << "Name: "<<name <<endl<< "Age: "<< age<<endl << "Emp ID: " << emp_id << endl;
        department::display();
    }
};

class accounts : protected department
{
protected:
    int bSal, DA, HRA;

public:
    void get()
    {
        cout << "\nEnter Basic Salary: ";
        cin >> bSal;
    }
    void calc()
    {
        DA = (bSal * 15)/100;
        HRA = (bSal * 10)/100;
    }
    void display()
    {
        cout <<"Basic Salary: "<< bSal<<endl<< "DA: " << DA <<endl<< "HRA: " << HRA << endl;
    }
};

int main()
{
    employee emp;
    accounts acc;
    emp.getData();
    emp.setValue();
    acc.get();
    acc.calc();
    emp.display();
    acc.display();
}