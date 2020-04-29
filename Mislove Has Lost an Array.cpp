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
     int n,l,r,x=1;
     cin>>n>>l>>r;
     int mn=0,mx=0;
     dom(i,r)
     {
          x=pow(2,i-1);
          mx+=x;
     }
     mx+=(n-r)*x;
     x=1;
     dom(i,l)
     {
          x=pow(2,i-1);
          mn+=x;
     }
     mn+=(n-l);
     cout << mn << " " << mx << endl;
}
