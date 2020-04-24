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
     int n,d,time=0,cnt;
     cin>>n>>d;
     int sn[n];
     com(i,n)
     {
          cin>>sn[i];
          time+=sn[i];
     }
     time+=(n-1)*10;
     if(time<=d)
     {
          time=d-time+(n-1)*10;
          cnt=time/5;
          cout << cnt << endl;
     }
     else
          cout << "-1\n";
}
