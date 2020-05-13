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
     int t;
     cin>>t;
     com(i,t)
     {
          int n,k,d,mx=1000000;
          cin>>n>>k>>d;
          vector<int>inp;
          com(i,n)
          {
               int x;
               cin>>x;
               inp.push_back(x);
          }
          com(i,inp.size()-d+1)
          {
               set<int>sub;
               for(int j=i;j<i+d;j++)
                    sub.insert(inp[j]);
               int x=sub.size();
               mx=min(mx,x);
          }
          cout << mx << endl;
     }
}
