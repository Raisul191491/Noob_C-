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
int n,m,k;
ll sum[200005]= {0};
vector<int>pos[200005];
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++)
    {
        int x=a[i];
        int cur=0;
        while(x>0)
        {
            if(pos[x].size()<k)
            {
                pos[x].push_back(cur);
                sum[x]+=cur;
            }
            cur++;
            x/=2;
        }
    }

    ll ans=1e9+10;
    for(int i=1; i<=2e5; i++)
    {
        if(pos[i].size()==k)
            ans=min(ans,sum[i]);
    }
    cout << ans << endl;;
}
