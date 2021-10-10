#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of base class A Called " << endl;
    }
    ~A()
    {
        cout << "Destructor of base class A Called " << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of base class B Called " << endl;
    }
    ~B()
    {
        cout << "Destructor of base class B Called " << endl;
    }
};

class D : public B
{
public:
    D()
    {
        cout << "Constructor of derieved class D Called " << endl;
    }
    ~D()
    {
        cout << "Destructor of derieved class D Called " << endl;
    }
};

int main()
{
    D ob;
    return 0;
}
