#include <iostream>
using namespace std;

class base{
    int i;
    public:
    base(){
        cout<<"Base class zero aruguement contructor"<<endl;
    }
    base(int k){
        i=k;
        cout<<"Base class parametrized contructor"<<endl;
    }
    void disp(){
        cout<<"i = "<<i<<endl;
    }
};

class derived:public base{
    int j;
    public:
        derived(){
            cout<<"derived class zero arg. constructor"<<endl;
        }
        derived(int k,int l):base(k){
            j=l;
            cout<<"derived class parametrized constructor"<<endl;
        }
        void display(){
            cout<<"j = "<<j;
        }
};

int main(){
    derived d(10,20);
    d.disp();
    d.display();
    return 0;
}