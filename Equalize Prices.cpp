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
     int q;
     cin>>q;
     com(i,q)
     {
          int n,k;
          cin>>n>>k;
          int a[n];
          com(i,n)
          {
               cin>>a[i];
          }
          sortI(a,n);
          if(abs(a[n-1]-(a[0]+k))<=k)
               cout << a[0]+k << endl;
          else
               cout << "-1\n";
     }
}
