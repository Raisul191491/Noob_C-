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
ll a[200005],ry[200005]={0};
int main()
{
     ll n,q,sum=0;
     cin>>n>>q;
     dom(i,n)
     {
          cin>>a[i];
     }
     com(i,q)
     {
          int l,r;
          cin>>l>>r;
          ry[l]++;
          ry[r+1]--;
     }
     dom(i,n)
     {
          ry[i]+=ry[i-1];
     }
     sort(a+1,a+1+n);
     sort(ry+1,ry+1+n);
     for(int i=n;i>=1;i--)
     {
          sum+=ry[i]*a[i];
     }
     cout << sum << endl;
}
