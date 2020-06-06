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
    ll n,ans=0,i;
    cin>>n;
    n=abs(n);

    for(i=1 ;; i++)
    {
        if(ans==n)
        {
            i--;
            break;
        }
        if(ans>n && (ans-n)%2==0)
        {
            i--;
            break;
        }
        ans+=i;
    }
    cout << i << endl;
}
