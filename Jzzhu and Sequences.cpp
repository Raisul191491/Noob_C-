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
    const int mx=1000000007;
    long long int a[3],x,y,n;
    cin>>x>>y;
    a[0]=x;
    a[1]=y;
    a[2]=y-x;
    cin>>n;
    x=(n-1)/3;
    if(x%2==0)
    {
        x=(a[(n-1)%3]%mx+mx);
        cout << x%mx << endl;
    }
    else
    {
        x=((a[(n-1)%3]*(-1))%mx+mx);
        cout << x%mx << endl;
    }
}
