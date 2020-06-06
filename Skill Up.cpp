#include<bits/stdc++.h>
typedef long long     ll;
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
int n,m,x;
int ans=INT_MAX;
int lvl[12][12],c[12];

void recc(int pos,vector<int>con,int cost)
{
    if(pos==n)
    {
        bool ok=true;
        for(int a:con)
        {
            if(a<x)
            {
                ok=false;
            }
        }
        if(ok)
            ans=min(cost,ans);
    }
    else
    {
        recc(pos+1,con,cost);
        com(i,m)
        {
            con[i]+=lvl[pos][i];
        }
        recc(pos+1,con,cost+c[pos]);
    }
}


void solve()
{
    cin>>n>>m>>x;
    com(i,n)
    {
        cin>>c[i];
        com(j,m)
        {
            cin>>lvl[i][j];
        }
    }
    recc(0,vector<int>(m,0),0);
    if(ans==INT_MAX)
        cout << -1;
    else
        cout << ans << endl;
}

int main()
{
    solve();
}
