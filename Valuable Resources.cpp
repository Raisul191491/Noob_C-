#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     ll n;
     cin>>n;
     ll mx=LLONG_MIN,mn=LLONG_MAX,x[n],y[n];
     com(i,n)
     {
          cin>>x[i]>>y[i];
     }
     com(i,n)
     {
          mx=max(mx,x[i]);
          mn=min(mn,x[i]);
     }
     ll a=abs(mx-mn);
     mx=LLONG_MIN,mn=LLONG_MAX;
     com(i,n)
     {
          mx=max(mx,y[i]);
          mn=min(mn,y[i]);
     }
     ll b=abs(mx-mn);
     ll side=max(a,b);
     cout << side*side << endl;
}
