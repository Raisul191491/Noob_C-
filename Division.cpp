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
    int t;
    cin>>t;
    com(i,t)
    {
        ll p,q,cnt=0;
        cin>>p>>q;
        vector<int>pos;
        if(p%q>0)
            cout << p << endl;
        else
        {
            ll ans=1;
            for(ll i=1; i*i<=q; i++)
            {
                if(q%i==0)
                {
                    cnt=p;
                    if(i>1)
                    {
                        while(cnt%q==0)
                        {
                            cnt/=i;
                        }
                        ans=max(ans,cnt);
                    }
                    cnt=p;
                    ll x=q/i;
                    while(cnt%q==0)
                    {
                         cnt/=x;
                    }
                    ans=max(ans,cnt);
                }
            }
            cout << ans << endl;
        }
    }
}
