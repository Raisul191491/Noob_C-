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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        ll n,mn=INT_MAX,cnt=0;
        cin>>n;
        ll a[n+1];
        dom(i,n)
        {
            cin>>a[i];
        }
        dom(i,n)
        {
            if(mp[a[i]]!=0)
            {
                mn=min((i-mp[a[i]]+1),mn);
                mp[a[i]]=i;
            }
            else
            {
                 mp[a[i]]=i;
            }
        }
        if(mn==INT_MAX)
            cout << "-1\n";
        else
            cout << mn << endl;
    }
}
