#include <iostream>
using namespace std;

int checkPrime(int n){
    int i, t = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            t = 0;
            break;
        }
    }
    return t;
}

int main()
{
    int a, b, flag=0;
    cout << "Enter start value and end value : ";
    cin >> a>>b;
    cout << "Prime Numbers between " << a << " and " << b <<" : ";
    while (a < b)
    {
        if(checkPrime(a)==1){
            cout<<a<<" ";
            flag=1;
        }
        a++;
    }
    if(flag==0){
        cout<<"No prime number in between";
    }
    cout << endl;
    return 0;
}