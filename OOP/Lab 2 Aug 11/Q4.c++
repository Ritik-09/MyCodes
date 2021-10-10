#include <iostream>
using namespace std;

void byValue(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void byReference(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void byAddress(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    byValue(a,b);
    cout<<"Swapping after call by value "<<a<<" "<<b<<endl;
    byAddress(&a,&b);
    cout<<"Swapping after call by address "<<a<<" "<<b<<endl;
    byReference(a,b);
    cout<<"Swapping after call by reference "<<a<<" "<<b<<endl;
}