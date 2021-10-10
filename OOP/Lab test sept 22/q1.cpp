#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of Base Class A Called " << endl;
    }
    ~A()
    {
        cout << "Destructor of Base Class A Called " << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Constructor of Base Class B Called " << endl;
    }
    ~B()
    {
        cout << "Destructor of Base Class B Called " << endl;
    }
};

class D :public A,public B
{
public:
    D()
    {
        cout << "Constructor of Derived Class d Called " << endl;
    }
    ~D()
    {
        cout << "Destructor of Derived Class d Called " << endl;
    }
};
int main()
{
    D ob;
    return 0;
}
