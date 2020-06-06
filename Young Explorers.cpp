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
void solve()
{
    int n,x,cnt=0,siz,beg=0,en=0;
    cin>>n;
    vector<ll>pos(n+1);
    pos[0]=0;
    com(i,n)
    {
        cin>>x;
        pos[i]=x;
    }
    sortvi(pos);
    while(1)
    {
        en=1;
        while(beg+en<=n && pos[beg+en]>en)
            en++;
        if(beg+en>n)
            break;
        cnt++;
        beg+=en;
    }
    cout << cnt << endl;
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



