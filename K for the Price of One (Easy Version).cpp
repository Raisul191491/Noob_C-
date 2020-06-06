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

void solve()
{
     int n,p,k,cnt=0,rem,x;
     cin>>n>>p>>k;
     rem=p;
     int pr[n+1],y[n+1]={0};
     dom(i,n)
     {
          cin>>pr[i];
     }
     sort(pr+1,pr+n+1);
     dom(i,n)
     {
          if(i>=k)
               y[i]=y[i-k]+pr[i];
          else
               y[i]=y[i-1]+pr[i];
          if(y[i]<=p)
               cnt=i;
     }
     cout << cnt << endl;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          solve();
     }
}
