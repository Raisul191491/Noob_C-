#include<bits/stdc++.h>
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
    int n;
    cin>>n;
    long long int a[n+1],b[n+1],c[n+1],d[n+1];
    com(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sortI(b,n);
    c[0]=a[0];
    d[0]=b[0];
    for(int i=1; i<n; i++)
    {
        c[i]=a[i]+c[i-1];
        d[i]=b[i]+d[i-1];
    }
    int m;
    cin>>m;
    com(i,m)
    {
        long long int q,l,r;
        cin>>q>>l>>r;
        if(q==1)
            cout << c[r-1]-c[l-1]+a[l-1] << endl;
        else
            cout << d[r-1]-d[l-1]+b[l-1] << endl;
    }
}
