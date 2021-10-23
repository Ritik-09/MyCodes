#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int r[5],k=0;
        for(int i=0;i<5;i++){
            cin>>r[i];
            if(r[i]==1) k++;
            else if(r[i]==2) k--;
        }
        if(k==0) cout<<"Draw\n";
        else if(k>0) cout<<"India\n";
        else cout<<"England\n";
    }
    return 0;
}