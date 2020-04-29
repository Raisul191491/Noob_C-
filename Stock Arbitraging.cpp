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
     int n,m,rub;
     cin>>n>>m>>rub;
     int a[n],b[m];
     com(i,n)
     {
          cin>>a[i];
     }
     com(i,m)
     {
          cin>>b[i];
     }
     sortI(a,n);
     sortD(b,m);
     if(a[0]>=b[0])
          cout << rub << endl;
     else
     {
          int x,y;
          y=rub/a[0];
          x=y*a[0];
          rub-=x;
          rub+=y*b[0];
          cout << rub << endl;
     }
}
