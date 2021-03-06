// #include <bits/stdc++.h>
// using namespace std;

// int isPrime(int n)
// {
//     if (n <= 1)
//         return 0;

//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return 0;

//     return 1;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         int c=0;
//         while(x<y){
//             if(isPrime(x+2))  x=x+2;
//             else x++;
//             c++;
//         }
//         cout<<c<<"\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> prime(10000001, 1);
vector<int> fre(10000001, 0);
void sieve()
{
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= 10000000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 10000000; j += i)
                prime[j] = 0;
        }
    }
    for (int i = 2; i <= 10000000; i++)
        fre[i] = fre[i - 1] + prime[i];
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == 1 && y == 2)
    {
        cout << 2 << "\n";
        return;
    }
    if (x == 1 && y == 3)
    {
        cout << 2 << "\n";
        return;
    }
    if (x == 2 && y == 3)
    {
        cout << 2 << "\n";
        return;
    }
    ll ans = y - x;
    ans = ans - (fre[y] - fre[x]);
    if (prime[x + 1])
        ans = ans + 1;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}