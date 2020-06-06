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
int main()
{
    int n,m,ups=0,sta,high=INT_MAX;
    cin>>n>>m;
    int g[n],b[m];
    com(i,n)
    {
        cin>>g[i];
    }
    sortD(g,n);
    com(i,m)
    {
        cin>>b[i];
    }
    sortD(b,m);
    sta=min(n,m);
    for(int i=0; i<=sta; i++)
    {
        ups=0;
        for (int j=i; j<n; ++j)
            ups+= g[j];
        for (int j=i; j<m; ++j)
            ups+= b[j] * i;
        high=min(high,ups);
    }
    cout << high << endl;
}
