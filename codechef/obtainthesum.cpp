#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int p,sum = 0;
        // int a[n+1];
        // for (int i = 0; i <= n; i++)
        // {
        //     a[i] = i;
        // }
        int x = 1;
        while (x <=n)
        {
            sum=0;
            p=0;
            for (int i = 1; i < x; i++)
            {
                sum += x-i;
            }
            for (int i = 1; i+x <=n; i++)
            {
                sum += i+x;
            }
            if (sum == s)
            {
                p = 1;
                break;
            }
            x++;
        }
        if(p==1) cout<<x<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}