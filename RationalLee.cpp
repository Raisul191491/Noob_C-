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
    while(t--)
    {
        ll n,k,x,sum=0;
        cin>>n>>k;
        x=n-1;
        vector<ll>v,pos(n),con(k);
        for(int i=0;i<n;i++)
        {
            cin>>pos[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>con[i];
        }
        sort(pos.begin(),pos.end());
        sort(con.begin(),con.end());
        com(i,k)
        {
            if(con[i]==1)
            {
                sum+=2*pos[x];
                x--;
                con[i]=0;
            }
            else
            {
                sum+=pos[x];
                con[i]--;
                v.push_back(con[i]);
                x--;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            sum+=pos[x-v[i]+1];
            x=x-v[i]+1;
            x--;
        }
        cout << sum << endl;
    }
}
