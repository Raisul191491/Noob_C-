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
     int v1,v2,dis=0;
     cin>>v1>>v2;
     int t,d,dif=0;
     cin>>t>>d;
     vector<ll>pos(t+1);
     pos[1]=v1;
     pos[t]=v2;
     for(int i=2;i<t;i++)
     {
          pos[i]=pos[i-1]+d;
     }
     for(int i=t-1;i>1;i--)
     {
          dif=pos[i]-pos[i+1];
          //cout << dif << endl;
          if(dif>d)
               pos[i]=pos[i+1]+d;
          else
               break;
     }
     dom(i,t)
     {
          dis+=pos[i];
     }
     cout << dis << endl;
}
