#include <iostream>
using namespace std;


void byReference(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}


int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    byReference(a,b);
    cout<<"Swapping after call by reference "<<a<<" "<<b<<endl;
}