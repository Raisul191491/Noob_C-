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
     ll n,k;
     cin>>n>>k;
     ll a[n],b[n];
     com(i,n)
     {
          cin>>a[i];
          b[i]=a[i];
     }
     sortI(a,n);
     if(k>2)
          cout << a[n-1] << endl;
     else if(k==1)
          cout << a[0] << endl;
     else
          cout << max(b[0],b[n-1]) << endl;
}
