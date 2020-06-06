#include<bits/stdc++.h>
typedef long long     ll;
typedef unsigned long long     ull;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
map<ll,ll>a;
void solve()
{
    ll n,p,cnt=0;
    cin>>n;
    p=n;
    com(i,n)
    {
        int k;
        cin>>k;
        k+=i;
        k%=p;
        if(k<0)
            k+=p;
        if(a[k]==1)
            cnt++;
        a[k]=1;
    }
    if(cnt)
        cout << "NO\n";
    else
        cout << "YES\n";
    a.clear();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

