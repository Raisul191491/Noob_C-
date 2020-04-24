#include<bits/stdc++.h>
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
     int n,m,x,y;
     cin>>n>>m;
     vector<pair<int,int>>wa;
     com(i,n)
     {
          cin>>x;
          y=i;
          wa.push_back(make_pair(x,y));
     }
     com(i,wa.size())
     {
          if(wa[i].first<=m)
               x=wa[i].second;
          else
          {
               wa[i].first-=m;
               wa.push_back(make_pair(wa[i].first,wa[i].second));
          }
     }
     cout << x+1 << endl;
}
