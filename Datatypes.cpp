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
using namespace std;
map<ll,ll>mp;
int main()
{
    int n,x=0;
    cin>>n;
    ll a[n];
    com(i,n) cin>>a[i];
    sortD(a,n);
    while(x<n-1)
    {
        if(a[x]!=a[x+1] && a[x+1]*2>a[x])
        {
            cout << "YES\n";
            return 0;
        }
        x++;
    }
    cout << "NO\n";
}
