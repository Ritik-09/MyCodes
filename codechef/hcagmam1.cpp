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
        int x, y;
        cin >> x >> y;
        string st;
        cin >> st;
        int a, b, c;
        a = b = c = 0;
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == '1')
            {
                c++;
                b++;
                if (a <= b)
                    a = b;
            }
            else
                b = 0;
        }
        cout<<(x*c)+(y*a)<<"\n";
    }
    return 0;
}