#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long> &a, pair<long long, long long> &b){
    return a.second < b.second;
}
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,x;
        cin>>n;

        vector<pair<long long, long long> > arr;

        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            arr.push_back(make_pair(x,i));
        }

        long long k=0;
        sort(arr.begin(), arr.end());

        for(int i=0;i<n;i++)
        {
            if(arr[i].first > k)
            {
                arr[i].first = k;
                k++;
            }
            else if(arr[i].first == k)
            {
                arr[i].first = k;   
            }
        }
        sort(arr.begin(), arr.end(), cmp);
                for(int i=0;i<n;i++)
        {
            cout<<arr[i].first<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}