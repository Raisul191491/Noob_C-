#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
     float k,x,y,d,c=0;
     int n;
     cin>>n>>k;
     int a[n],b[n];
     cin>>x>>y;
     for(int i=0;i<n-1;i++)
     {
          cin>>a[i]>>b[i];
     }
     for(int i=0;i<n-1;i++)
     {
          x=abs(x-a[i]);
          y=abs(y-b[i]);
          d=sqrt(x*x+y*y);
          c+=d;
          x=a[i];
          y=b[i];
     }
     k=(c/50)*k;
     cout << fixed << setprecision(10) << k << endl;
}
