#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;

void solve()
{
    ll n,sum=0,cnt=0,rem=0;
    cin>>n;
    ll a[n+1]={0};
    dom(i,n)
    {
        cin>>a[i];
        sum+=a[i];
        a[i]+=a[i-1];
    }
    if(sum%3!=0)
    {
        cout << "0\n";
    }
    else
    {
        ll nsum=sum/3;
        dom(i,n-1)
        {
            if(a[i]==2*nsum)
                cnt+=rem;
            if(a[i]==nsum)
                rem++;
        }
        cout << cnt << endl;
    }
}

int main()
{
    solve();
}

