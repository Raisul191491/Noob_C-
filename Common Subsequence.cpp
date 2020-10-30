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
        int a,b,pos=-1;
        cin>>a>>b;
        int x[a],y[b];
        map<int,int>mp;
        com(i,a)
        {
            cin>>x[i];
            if(mp[x[i]]==0)
                mp[x[i]]++;
        }
        com(i,b)
        {
            cin>>y[i];
            if(mp[y[i]]==1)
                mp[y[i]]++;
            if(mp[y[i]]==2)
                pos=y[i];
        }
        if(pos==-1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << "1 " << pos << endl;
        }
    }
}
