#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
#define endl          '\n'
#define mod           1000000007
using namespace std;

ll solve(ll x,ll y)
{
     ll ans=1;
     while(y>0)
     {
          if(y%2)
               ans=(ans*x)%mod;
          x=(x*x)%mod;
          y>>=1;
     }
     return ans%mod;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          ll n,sum;
          cin>>n;n++;
          sum=solve(2LL,n/2)+solve(2LL,n-n/2);
          sum-=2;
          cout << sum%mod << endl;
     }
}
