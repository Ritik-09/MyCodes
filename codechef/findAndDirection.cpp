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
        int x;
        cin >> x;
        if (x % 4 == 1)
            cout << "East\n";
        else if (x % 4 == 2)
            cout << "South\n";
        else if (x % 4 == 3)
            cout << "West\n";
        else if (x % 4 == 0)
            cout << "North\n";
    }
    return 0;
}