#include<bits/stdc++.h>
typedef long long ll;
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
    ll n,t,c,row=0,cnt=0;
    cin>>n>>t>>c;
    com(i,n)
    {
        int x;
        cin>>x;
        if(x<=t)
            row++;
        else
            row=0;
        if(row>=c)
            cnt++;
    }
    cout << cnt << endl;
}
