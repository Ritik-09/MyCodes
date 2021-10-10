#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int sum=0;
	   int m[100]={0};
	   int p,s;
	   for(int i=0;i<n;i++)
	   {
	     cin>>p>>s;
         if( p<9 and s>m[p])
         {
            m[p] = s;
         }
	   }
       for(int i=1;i<9;i++)
       {
         sum += m[i];
       }
	   cout<<sum<<"\n";
	}
	return 0;
}