#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    vector<int> p = {
        6, 10, 14, 15, 21, 22, 26, 33, 34, 35, 38, 39, 46, 51, 55, 57, 58, 62, 65, 69, 74, 77, 82, 85, 86, 87, 91, 93, 94, 95,
        106, 111, 115, 118, 119, 121, 122, 123, 129, 133, 134, 141, 142, 143, 146, 155, 158, 159, 161, 166, 169, 177, 178, 183, 187, 194};
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = i; j < p.size(); j++)
        {
            if (p[i] + p[j] == n)
                return 1;

            else if (p[i] + p[j] > n)
                break;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (solve(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}