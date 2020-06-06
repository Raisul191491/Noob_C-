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

void solve()
{
     int n,flag=0,x,y;
     cin>>n;
     int a[n];
     com(i,n) cin>>a[i];
     com(i,n-1)
     {
          if(abs(a[i]-a[i+1])>=2)
          {
               flag=1;
               x=i+1,y=i+2;
               break;
          }
     }
     if(flag)
          cout << "YES" << endl << x << " " << y << endl;
     else
          cout << "NO\n";
}

int main()
{
     int t;
     cin>>t;
     while(t--)
          solve();
}
