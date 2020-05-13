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
    int n,i,j;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
    }
    if(n<=2)
    {
        cout << "YES\n";
    }
    else
    {
        for(i=0; i<n-2; i++)
        {
            for(j=i+2; j<n; j++)
            {
                if(a[j]<a[i])
                    break;
            }
            if(j<n)
                break;
        }
        if(i==n-2&&j==n)
            cout << "YES\n";
        else
            cout << "NO\n";
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
