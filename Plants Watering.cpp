#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define in(x)         freopen("x","r",stdin);
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
     freopen("plants.in","r",stdin);
    int n;
    cin>>n;
    ll h[n],g[n],f=1,flag=1;
    ll dis,dd=1e9+10;
    vector<ll>v;
    com(i,n)
    {
        cin>>h[i];
        if(i)
        {
            if(h[i]<h[i-1])
                flag=0;
        }
    }
    com(i,n)
    {
        cin>>g[i];
    }
    if(flag)
    {
        cout << 0 << endl;
        return 0;
    }
    com(i,n-1)
    {
        if(h[i]<=h[i+1] && g[i]<=g[i+1])
            v.push_back(0);
        else if(h[i]>h[i+1] && g[i]<g[i+1])
        {
            dis=abs(h[i]-h[i+1]);
            dis=ceil((float)dis/(float)abs(g[i]-g[i+1]));
            v.push_back(dis);
        }
        else if(h[i]<=h[i+1] && g[i]>g[i+1])
        {
            dis=abs(h[i]-h[i+1]);
            dis/=abs(g[i]-g[i+1]);
            dd=min(dis,dd);
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==0)
        cout << -1 << endl;
    else
    {
        sortvd(v);
        if(dd==0)
        {
            cout << v[0] << endl;
        }
        else
        {
            if(v[0]>dd)
                cout << -1 << endl;
            else
                cout << v[0] << endl;
        }
    }
}
