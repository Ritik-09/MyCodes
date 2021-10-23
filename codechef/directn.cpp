#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        string st;
        cin>>n>>st;
        for(int i=0;i<n;i++){
            if((st[i]=='R'&&st[i+1]=='R')||(st[i]=='L'&&st[i+1]=='L'))
            {
                k=1;
                break;
            }
        }
        if(k) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}