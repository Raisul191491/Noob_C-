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
int main()
{
    ll n,x,gc,gcd=0;
    cin>>n;
    vector<ll>pos,con(n);
    com(i,n) cin>>con[i];
    gc=con[0];
    dom(i,n-1)
    {
        x=(con[i]*gc)/__gcd(con[i],gc);
        gc=__gcd(con[i],gc);
        gcd=__gcd(x,gcd);
    }
    cout << gcd << endl;
}
