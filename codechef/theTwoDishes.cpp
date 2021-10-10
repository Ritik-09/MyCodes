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
        if (n >= s)
            cout << s << "\n";
        else if (n < s)
            cout << n-(s-n) << "\n";

    }
    return 0;
}