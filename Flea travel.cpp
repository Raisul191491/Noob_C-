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
     int n,sta=1;
     cin>>n;
     for(int i=1;;i++)
     {
          if(n==sta)
          {
               cout << "YES\n";
               return 0;
          }
          else
               sta*=2;
          if(sta>n)
          {
               cout << "NO\n";
               return 0;
          }
          //cout << sta;
     }
}