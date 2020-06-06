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
     ll n,sum1=0,sum2=0,mx=LLONG_MIN;
     cin>>n;
     ll a[n+1],b[n+1],c[n+1];
     dom(i,n)
     {
          cin>>a[i];
     }
     dom(i,n-1)
     {
          b[i]=abs(a[i]-a[i+1]);
     }
     dom(i,n-1)
     {
          if(i%2==1)
          {
               sum1+=b[i];
               sum2-=b[i];
          }
          else
          {
               sum1-=b[i];
               sum2+=b[i];
          }
          mx=max(mx,sum1);
          mx=max(mx,sum2);
          if(sum1<0) sum1=0;
          if(sum2<0) sum2=0;
     }
     cout << mx << endl;
}
