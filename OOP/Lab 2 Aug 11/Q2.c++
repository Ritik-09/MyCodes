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
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    int t = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n - i) == 1)
            {
                cout << n << " can be expressed as the sum of " << i << " and " << n - i << endl;
                t = 1;
            }
        }
    }

    if (t == 0)
        cout << n << " cannot be expressed as the sum of two prime numbers\n";
    return 0;
}
