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
    ll n,cnt=0;
    cin>>n;
    ll a[n],x;
    com(i,n)
    {
        cin>>a[i];
    }
    com(i,n)
    {
        cin>>x;
        a[i]-=x;
    }
    sortI(a,n);
    for(ll i=0; i<n; i++)
    {
        if(a[i]<=0)
            continue;
        x=lower_bound(a,a+n,1-a[i])-a;
        cnt+=i-x;
    }
    cout << cnt << endl;
}
