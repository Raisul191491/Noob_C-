#include<bits/stdc++.h>
typedef long long     ll;
typedef unsigned long long     ull;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
vector<ll>pos;
void solve()
{
    ll a,k,nsum=0;
    cin>>a>>k;
    k--;
    com(i,k)
    {
        nsum=a;
        while(nsum!=0)
        {
            pos.push_back(nsum%10);
            nsum/=10;
        }
        sortvi(pos);
        a+=pos[0]*pos[pos.size()-1];
        nsum=a;
        pos.clear();
        if(pos[0]==0)
            break;
    }
    cout << a << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


