#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
    char x,y,z,w;
    cin>>x>>y;
    int n;
    cin>>n;
    int a,b;
    n%=4;
    if(x=='v')
    {
        if(n==0)
            z='v';
        if(n==1)
            z='<';
        if(n==2)
            z='^';
        if(n==3)
            z='>';
    }
    if(x=='<')
    {
        if(n==0)
            z='<';
        if(n==1)
            z='^';
        if(n==2)
            z='>';
        if(n==3)
            z='v';
    }
    if(x=='^')
    {
        if(n==0)
            z='^';
        if(n==1)
            z='>';
        if(n==2)
            z='v';
        if(n==3)
            z='<';
    }
    if(x=='>')
    {
        if(n==0)
            z='>';
        if(n==1)
            z='v';
        if(n==2)
            z='<';
        if(n==3)
            z='^';
    }
    if(x=='v')
    {
        if(n==0)
            w='v';
        if(n==3)
            w='<';
        if(n==2)
            w='^';
        if(n==1)
            w='>';
    }
    if(x=='<')
    {
        if(n==0)
            w='<';
        if(n==3)
            w='^';
        if(n==2)
            w='>';
        if(n==1)
            w='v';
    }
    if(x=='^')
    {
        if(n==0)
            w='^';
        if(n==3)
            w='>';
        if(n==2)
            w='v';
        if(n==1)
            w='<';
    }
    if(x=='>')
    {
        if(n==0)
            w='>';
        if(n==3)
            w='v';
        if(n==2)
            w='<';
        if(n==1)
            w='^';
    }
    if(y==z&&y==w) cout << "undefined" << endl;
    else if(y==z) cout << "cw" << endl;
    else cout << "ccw" << endl;
}
