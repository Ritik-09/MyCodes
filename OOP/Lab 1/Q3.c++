#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    a=a%10;
    b=b%10;
    if(a==b){
        cout<<"Last digit of both numbers are equal";
    }
    else{
        cout<<"Last digit is not equal";
    }
}