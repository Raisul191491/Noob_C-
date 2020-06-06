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
#define pi            3.14159265358979323846264338327950
using namespace std;
map<ll,ll>mp;
int main()
{
    double a,b,h,m;
    cin>>a>>b>>h>>m;
    double ans,con,x,y;
    x=2.00*pi*(h/12.0+m/720.0);
    y=2.00*pi*(m/60.0);
    con=fabs(x-y);
    ans=sqrt(a*a+b*b-2*a*b*cos(con));
    cout <<fixed << setprecision(20)<< ans << endl;
}
