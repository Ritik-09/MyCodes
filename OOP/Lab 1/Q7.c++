#include <iostream>
using namespace std;

int main()
{
    int n,t=0;
    cout<<"Enter a number to find the last prime number occurs before the number: ";
    cin>>n;
    for (int i=n-1;i>=1;i--)
    {
        for (int m=2;m<i;m++)
        {
            if (i%m==0)
                t++;
        }
        if (t==0)
        {
            if (i==1)
            {
                cout<<"no prime number less than 2";
                break;
            }
            cout<<i<<" is the last prime number before "<<n<<endl;
            break;
        }
        t=0;
    }
    return 0;
}
