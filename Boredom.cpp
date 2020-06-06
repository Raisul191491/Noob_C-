#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
map<ll,ll>mp;
int main()
{
     ll n,mx=0;
     cin>>n;
     ll a[n],b[100005]={0},c[100005];
     com(i,n)
     {
          cin>>a[i];
          b[a[i]]++;
          mx=max(mx,a[i]);
     }
     c[0]=0,c[1]=b[1];
     for(int i=2;i<100005;i++)
          c[i]=max(c[i-1],c[i-2]+i*b[i]);

     cout << c[100004] << endl;
}
