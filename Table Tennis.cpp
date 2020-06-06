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
     ll n,k,x,y;
     cin>>n>>k;
     vector<ll>plr,slr;
     com(i,n)
     {
          cin>>x;
          plr.push_back(x);
          slr.push_back(x);
     }
     sortvd(slr);
     if(k>=n)
          cout << slr[0] << endl;
     else
     {
          ll i=1;
          x=plr[0],y=plr[0];
          while(1)
          {
               plr.push_back(min(x,plr[i]));
               x=max(x,plr[i]);
               if(x==y)
                    mp[x]++;
               else
               {
                    y=x;
                    mp.clear();
                    mp[x]++;
               }
               if(mp[x]==k)
               {
                    cout << x << endl;
                    break;
               }
               i++;
          }
     }
}
