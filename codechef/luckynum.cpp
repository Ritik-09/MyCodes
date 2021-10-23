#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if(a==7||b==7||c==7){
            cout<<"yes";
        }
        else cout<<"no";
    }
    return 0;
}