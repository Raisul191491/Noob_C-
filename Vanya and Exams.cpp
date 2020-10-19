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
using namespace std;
int main()
{
    ll n,r,avg,cnt=0;
    cin>>n>>r>>avg;
    map<ll,ll>mp;
    ll sum=0,cum=avg*n;
    com(i,n)
    {
        ll x,y;
        cin>>x>>y;
        sum+=x;
        mp[y]+=r-x;
    }
    ll dif=cum-sum;
    if(sum>=cum)
    {
        cout << 0 << endl;
    }
    else
    {
        for(int i=1; i<=1000000 && dif; i++)
        {
            ll pos=min(dif,mp[i]);
            cnt+=pos*i;
            dif-=pos;
        }
    }
    cout << cnt << endl;
}
