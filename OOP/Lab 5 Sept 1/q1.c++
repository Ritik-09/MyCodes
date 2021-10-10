#include <iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void swap(c1 & , c2 &);
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<< val1 <<endl;
        }
};

class c2{
    int val2;
    friend void swap(c1 &, c2 &);
    public:
        void indata(int a){
            val2 = a;
        }

        void display(void){
            cout<< val2 <<endl;
        }
};

void swap(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;
    int n;
    cout<<"Enter first number: "<<endl;
    cin>>n;
    oc1.indata(n);
    cout<<"Enter second number: "<<endl;
    cin>>n;
    oc2.indata(n);
    swap(oc1, oc2);
    cout<<"The value of c1 after swap becomes: ";
    oc1.display();
    cout<<"The value of c2 after swap becomes: ";
    oc2.display();
    return 0;
}
