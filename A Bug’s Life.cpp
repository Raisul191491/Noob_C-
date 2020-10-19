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
map<int,int>mp;
int cnt=0;
int see(int x,int y)
{
    if(mp[x]>0 && mp[y]>0)
        cnt++;
    mp[x]++;
    mp[y]++;
}
int main()
{
    int t;
    cin>>t;
    dom(j,t)
    {
        cnt=0;
        mp.clear();
        int n,m;
        cin>>n>>m;
        int x[m],y[m],flag=0;
        com(i,m)
        {
            cin>>x[i]>>y[i];
        }
        dom(i,m)
        {
            see(x[i],y[i]);
        }
        cout << "Scenario #" << j << ":" << endl;
        cout << cnt << endl;
        if(cnt>0)
            cout << "Suspicious bugs found!" << endl;
        else
            cout << "No suspicious bugs found!" << endl;
    }
}
