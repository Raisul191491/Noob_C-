#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int a,b,x,y,ml,mt,mw;
    cin>>a>>b>>x>>y;
    mw=__gcd(x,y);
    //cout << mw;
    x/=mw;
    y/=mw;
    ml=a/x;
    mt=b/y;
    mw=min(ml,mt);
    if(a>x && b>y)
    {
         cout << mw*x << " " << mw*y << endl;
    }
    else
    {
         cout << "0 0" << endl;
    }

}
