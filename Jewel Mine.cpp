
#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
const int mod =       1000000007;
using namespace std;

ll ans(ll n,ll m)
{
    if(n==0)
        return 1;
    ll x = ans(n/2,m);
    x*=x;
    x%=mod;
    if(n%2)
    {
        x*=m;
        x%=mod;
    }
    return x;
}

int main()
{
     fast
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        m%=mod;
        n/=2;
        n*=(n+1);
        cout << ans(n,m) << endl;
    }
}
