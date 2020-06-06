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
map<ll,ll>mp;
int main()
{
    ll n,sum=0,maxi=0;
    cin>>n;
    ll a[n];
    com(i,n) cin>>a[i];
    dom(i,30)
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]>i)
               sum=0;
            else
            {
                 sum=max((ll)0,sum+a[j]);
                 maxi=max(maxi,sum-i);
            }
        }
    }
    cout << maxi << endl;
}
