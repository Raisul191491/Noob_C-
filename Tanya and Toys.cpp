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
     int n,m;
     cin>>n>>m;
     map<ll,ll>mp;
     vector<int>dol;
     com(i,n)
     {
          int x;
          cin>>x;
          mp[x]=1;
     }
     dom(i,1000006)
     {
          if(mp[i]!=1)
          {
               if(i<=m)
               {
                    dol.push_back(i);
                    m-=i;
               }
               else
                    break;
          }
     }
     cout << dol.size() << endl;
     for(auto x:dol)
          cout << x << " ";
}

int main()
{
     solve();
}

