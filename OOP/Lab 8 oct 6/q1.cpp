#include <iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"display of Base"<<endl;
        }
};

class A:virtual public Base{
    public:
        void display()
        {
            cout << "display of A" << endl;
        }
};
class B: virtual public Base{
    public:
        void display()
        {
            cout << "display of B" << endl;
        }
};

class Derived : public A,public B{

};

int main(){
    Derived obj;
    obj.A::display();
    obj.B::display();
    return 0;
}