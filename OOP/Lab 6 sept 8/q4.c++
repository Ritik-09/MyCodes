#include<iostream>
using namespace std;

class c{
    public:
        c(){
            cout<<"constructor is called "<<endl;
        }

        ~c(){
            cout<<"destructor is called"<<endl;
        }
};
int main(){
    cout<<"creating one object"<<endl;
    c c1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        c c2, c3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}