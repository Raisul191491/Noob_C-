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
     int a[n+1]={0},b[n+1]={0};
     n*=n;
     vector<int>w;
     com(i,n)
     {
          int h,v;
          cin>>h>>v;
          if(a[h]==0 && b[v]==0)
          {
               w.push_back(i+1);
               a[h]++,b[v]++;
          }
     }
     com(i,w.size())
     {
          cout << w[i] << " ";
     }
}
