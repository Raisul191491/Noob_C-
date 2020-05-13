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
          ll n,k;
          cin>>n>>k;
          if(k%(n-1)==0)
          {
               ll x=k/(n-1);
               cout << n*x-1 << endl;
          }
          else if(k%(n-1)!=0)
          {
               ll x=k/(n-1);
               ll rem=k%(n-1);
               cout << n*x+rem << endl;
          }
     }
}
