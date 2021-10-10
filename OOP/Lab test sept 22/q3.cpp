#include <iostream>
using namespace std;

class A
{
    int n1;
    public:
    void getvalue()
    {
        cout<<" enter the value of n1 ";
        cin>>n1;
    }
    void display()
    {
        cout<<"n1 = "<<n1<<endl;
    }
};

class B:public A
{
    int n2;
    public:
    B()
    {
        cout<<" enter the value of n2 ";
        cin>>n2;
    }
    void display()
    {
        cout<<"n2 = "<<n2<<endl;
    }
};

int main()
{
    B ob;
    ob.getvalue();
    ob.display();
    ob.A::display();
    return 0;
}