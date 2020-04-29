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
     int t;
     cin>>t;
     com(i,t)
     {
          int n,x,y=0,cnt=0;
          cin>>n;
          int a[n+1]={0};
          dom(i,n)
          {
               cin>>x;
               a[x]++;
               if(a[x]==1)
                    cnt++;
               y=max(y,a[x]);
          }
          if(y==cnt)
               cout << cnt-1 << endl;
          else
          {
               cnt=min(y,cnt);
               cout << cnt << endl;
          }
     }
}
