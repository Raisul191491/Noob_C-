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
    ll l,r,x,y,cnt=0;
    cin>>l>>r>>x>>y;

    vector<ll>pos;
    for(int i=1; i*i<=y; i++)
    {
        if(y%i==0)
        {
            pos.push_back(i);
            if(y/i!=i)
            {
                pos.push_back(y/i);
            }
        }
    }
    com(i,pos.size())
    {
        //cout << pos[i] << " ";
        com(j,pos.size())
        {
            ll gc=__gcd(pos[i],pos[j]);
            ll lc=lcm(pos[i],pos[j]);
            if(gc==x && lc==y && pos[i]>=l && pos[i]<=r && pos[j]>=l && pos[j]<=r)
                cnt++;
        }
    }
    cout << cnt << endl;
}
