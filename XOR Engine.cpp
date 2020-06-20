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
/*
even xor odd = odd
even xor even = even
odd xor odd = even
odd xor even = odd
*/
void solve()
{
    ll n,q,odd=0;
    cin>>n>>q;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        int cnt=0;
        while(x)
        {
            if(x&1)
                cnt++;
            x=x>>1;
        }
        if(cnt&1)
            odd++;
    }

    for(int i=0; i<q; i++)
    {
        int p;
        cin>>p;
        int cnt=0;
        while(p)
        {
            if(p&1)
                cnt++;
            p=p>>1;
        }
        if(cnt&1)
            cout << odd << " " << n-odd << endl;
        else
            cout << n-odd << " " << odd << endl;
    }
}

int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        solve();
    }
}
