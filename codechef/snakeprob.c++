#include <iostream>
#include <string.h>
using namespace std;
int check(int,char *);


int main()
{
    int R, L, T;
    char str[500];
    cin >> R;
    int S[R];
    for (int i = 0; i < R; i++)
    {
        T = 0;
        cin >> L;
        cin >> str;
        S[i]=check(L,str);

    }
    for (int i = 0; i < R; i++)
    {
        if(S[i]==0){
            cout<<"valid"<<endl;
        }
        else if(S[i]==1){
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}
int check(int l, char *St)
{
    int j = 0, T;
    while (j < l)
    {
        if (St[j] == '.')
        {
            j++;
            continue;
        }
        else if (St[j] == 'H' && T == 0)
        {
            T = 1;
            j++;
        }
        else if (St[j] == 'T' && T == 1)
        {
            T = 0;
            j++;
        }
        else
        {
            // cout<<"Invalid"<<endl;
            T = 1;
            break;
        };
    }
    if (T == 0)
    {
        return 0;
        // cout<<"Valid"<<endl;
    }
    else if (T == 1)
    {
        return 1;
        // cout<<"Invalid"<<endl;
    }
}