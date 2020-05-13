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
     int ex=0,n;
     cin>>n;
     int a[101],b[101];
     int c[10]={0},d[10]={0};
     com(i,n)
     {
          cin>>a[i];
     }
     com(i,n)
     {
          cin>>b[i];
     }
     com(i,n)
     {
          c[a[i]]++;
          d[b[i]]++;
     }
     dom(i,5)
     {
          if((c[i]+d[i])%2==0)
               ex+=abs(c[i]-d[i])/2;
          else
          {
               cout << "-1\n";
               return 0;
          }
     }
     cout << ex/2 << endl;
}
