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
    int t;
    cin>>t;
    com(i,t)
    {
        ll n,x=0,y=0,wwa=0;
        cin>>n;
        ll a[n],b[n];
        com(i,n) cin>>a[i];
        com(i,n) cin>>b[i];
        com(i,n)
        {
            if(x==y)
            {
                if(a[i]==b[i])
                {
                    x+=a[i];
                    y+=b[i];
                    wwa+=a[i];
                }
                else
                {
                    x+=a[i];
                    y+=b[i];
                }
            }
            else
            {
                x+=a[i];
                y+=b[i];
            }
        }
        cout << wwa << endl;
    }
}
