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
     int n,cnt=0;
     cin>>n;
     long long int a[n+1];
     com(i,n)
     {
          cin>>a[i];
     }
     sortI(a,n);
     com(i,n)
     {
          if(a[i]>a[0] && a[i]<a[n-1])
               cnt++;
     }
     cout << cnt << endl;
}