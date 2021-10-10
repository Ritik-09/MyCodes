#include <iostream>
using namespace std;

class a
{
    int a, b;
    static int c;

public:
    void get()
    {
        cout << "Enter value: " << endl;
        cin>>a>>b>>c;
    }
    void disp(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};

int a::c;
int main(){
    a a1,a2;
    a1.get();
    a2.get();
    a1.disp();
    a2.disp();
}