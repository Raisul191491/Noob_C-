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
     int n;
     cin>>n;
     vector<int>un;
     com(i,n)
     {
          int x;
          cin>>x;
          un.push_back(x);
     }
     sortvi(un);
     auto last=unique(un.begin(),un.end());
     un.erase(last,un.end());
     sortvd(un);
     com(i,un.size()-1)
     {
          com()
     }
}
