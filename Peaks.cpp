#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
ll xp[100005]={0};
int main()
{
    ll n,m,cnt=0,x,y;
    cin>>n>>m;
    ll a[100005];
    dom(i,n)
    {
        cin>>a[i];
    }
    com(i,m)
    {
        cin>>x>>y;
        if(a[x]==a[y])
        {
            xp[x]=1;
            xp[y]=1;
        }
        else if(a[x]<a[y])
        {
            xp[x]=1;
        }
        else
        {
            xp[y]=1;
        }
    }
    dom(i,n)
    {
        if(xp[i]==0)
        {
            //cout << a[i] << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
}
