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
     ll n,k;
     cin>>n>>k;
     ll a[n];
     com(i,n)
     {
          cin>>a[i];
     }
     if(k%2)
          k=1;
     else if(k>0)
          k=2;
     com(i,k)
     {
          ll mx=a[0];
          com(i,n)
          {
               mx=max(mx,a[i]);
          }
          com(i,n)
          {
               a[i]=mx-a[i];
          }
     }
     com(i,n)
     {
          cout << a[i] << " ";
     }
}
