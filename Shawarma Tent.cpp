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
map<pair<ll,ll>,ll>mp;
int main()
{
     ll n,s1,s2,pos,con,mx=-1;
     cin>>n>>s1>>s2;
     com(i,n)
     {
          ll x,y;
          cin>>x>>y;
          if(x<=s1-1) mp[{s1-1,s2}]++;
          else if(x>=s1+1) mp[{s1+1,s2}]++;
          if(y<=s2-1) mp[{s1,s2-1}]++;
          else if(y>=s2+1) mp[{s1,s2+1}]++;
     }
     for(auto x:mp)
     {
          if(x.sc>mx)
          {
               mx=x.sc;
               con=x.fr.fr;
               pos=x.fr.sc;
          }
     }
     cout << mx << endl;
     cout << con << " " << pos << endl;
}
