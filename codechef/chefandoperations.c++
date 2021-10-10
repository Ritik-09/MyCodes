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
        int n, c;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            int q = b[i] - a[i];
            while (q--)
            {
                a[i] += 1;
                a[i + 1] += 2;
                a[i + 2] += 3;
            }
        }
        for (int i = 0; i < n; i++)
        {
            c = 1;
            if (a[i] != b[i])
            {
                c = 0;
                break;
            }
        }
        if(c==0) cout<<"NIE\n";
        else cout<<"TAK\n";
    }
    return 0;
}