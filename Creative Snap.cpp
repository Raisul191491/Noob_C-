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
ll n,k,a,b;
ll con[100005];

ll solve(ll sta,ll en)
{
    ll low=lower_bound(con,con+k,sta)-con;
    ll high=upper_bound(con,con+k,en)-con;
    ll cnt=high-low;
    //cout << cnt << endl;
    if(!cnt)
        return a;
    ll po=(ll)1*b*cnt*(en-sta+1);
    if(sta<en)
    {
         ll mid=(sta+en)/2;
         po=min(po,solve(sta,mid)+solve(mid+1,en));
    }
    return po;
}

int main()
{
    cin>>n>>k>>a>>b;
    com(i,k)
    {
        cin>>con[i];
        con[i]--;
    }
    sortI(con,k);
    ll dam=solve(0,(1<<n)-1);
    cout << dam << endl;
}
