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
    int n,x,mx=INT_MIN,flag=0;
    cin>>n>>x;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
        if(a[i]==x)
        {
            flag=1;
        }
        mx=max(mx,a[i]);
    }
    if(flag)
        cout << "1\n";
    else
        cout << max(2,((x+mx-1)/mx)) << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
