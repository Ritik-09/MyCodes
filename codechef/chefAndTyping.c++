#include <iostream>
#include <string>
using namespace std;

// int solve(int t[], string s[], int j)
// {
//     int i = 0, a = 2;
//     while (i < j)
//     {
//         if (s[i] == s[j])
//             return (t[i] / 2);
//         i++;
//     }
//     for (int i = 1; i < s[j].length(); i++)
//     {
//         if ((s[j][i] == 'd' || s[j][i] == 'f') && (s[j][i - 1] == 'd' || s[j][i - 1] == 'f'))
//             a = a + 4;
//         else if ((s[j][i] == 'j' || s[j][i] == 'k') && (s[j][i - 1] == 'j' || s[j][i - 1] == 'k'))
//             a = a + 4;
//         else
//             a = a + 2;
//     }
//     t[j] = a;
//     return a;
// }
int main()
{
    int t, n, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s[n];
        int t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int a, sum = 0;
        for (int j = 0; j < n; j++)
        {
            a = 0;
            for (int i = 0; i < s[j].length(); i++)
            {
                if (i == 0)
                    a = a + 2;
                else if ((s[j][i] == 'd' || s[j][i] == 'f') && (s[j][i - 1] == 'd' || s[j][i - 1] == 'f'))
                    a = a + 4;
                else if ((s[j][i] == 'j' || s[j][i] == 'k') && (s[j][i - 1] == 'j' || s[j][i - 1] == 'k'))
                    a = a + 4;
                else
                    a = a + 2;
            }
            t[j] = a;
            sum = sum + a;
        }
        for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            if(s[i]==s[j]){
	                sum = sum -(t[j]/2);
	                t[j]=0;
	            }
	        }
	    }
        cout<<sum;
    }
}
