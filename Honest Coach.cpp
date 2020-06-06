#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
map<ll,ll>mp;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int n,mx=10000;
          cin>>n;
          int a[n];
          com(i,n)
          {
               cin>>a[i];
          }
          sortI(a,n);
          com(i,n-1)
          {
               int x=abs(a[i]-a[i+1])
               mx=min(x,mx);
          }
          cout << mx << endl;
     }
}
