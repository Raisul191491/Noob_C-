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
     fast
    int t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n],sum=0,dif=0,buf=0;

        com(i,n)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        com(i,n-1)
        {
            if(abs(a[i]-a[i+1])<d || a[i]>=a[i+1])
            {
                if(a[i]>=a[i+1])
                {
                    sum+=abs((a[i]+d)-a[i+1]);
                    a[i+1]=a[i]+d;
                    buf=a[i+1]+d;
                }
                else
                {
                    dif=d-(abs(a[i]-a[i+1]));
                    ll x=abs(buf-a[i]);
                    sum+=min(x,dif);
                    a[i]-=min(x,dif);
                    if(abs(a[i]-a[i+1])<d)
                    {
                         dif=d-(abs(a[i]-a[i+1]));
                         sum+=dif;
                         a[i+1]+=dif;
                         buf=a[i+1]+d;
                    }
                }
                cout << sum << " ";
            }
        }

        cout << sum << endl;
    }
}
