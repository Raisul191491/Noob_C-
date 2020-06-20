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
map<ll,ll>mp;
int main()
{
    int n,cnt=0;
    cin>>n;
    int x[n],y[n];
    com(i,n)
    {
        cin>>x[i]>>y[i];
    }
    com(i,n)
    {
        if(x[i]==5)
            continue;
        if(mp[x[i]-y[i]]==0)
        {
            //cout << x[i] << endl;
            if(x[i]-y[i]>x[i-1] || i==0)
            {
                //cout << x[i]-y[i] << endl;
                cnt++;
                mp[x[i]-y[i]]=1;
                continue;
            }
        }
        if(mp[x[i]+y[i]]==0)
        {
            if(x[i]+y[i]<x[i+1] || i==n-1)
            {
                //cout << x[i]+y[i] << endl;
                cnt++;
                mp[x[i]+y[i]]=1;
                continue;
            }
        }
    }

//cout << mp[-1] << endl;
    cout << cnt << endl;
}
