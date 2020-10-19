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
    ll n,x=0,y=0,z=0,sum1=0,sum2=0;
    bool c=true;
    cin>>n;
    vector<int>q,p;
    com(i,n)
    {
        cin>>x;
        q.push_back(x);
    }
    q.push_back(0);
    sortvd(q);
    com(i,n)
    {
        cin>>x;
        p.push_back(x);
    }
    p.push_back(0);
    sortvd(p);
    while(z<2*n)
    {
        if(c)
        {
            if(q[x]>=p[y])
            {
                sum1+=q[x];
                x++;
            }
            else
                y++;
        }
        else
        {
            if(p[y]>=q[x])
            {
                sum2+=p[y];
                y++;
            }
            else
                x++;
        }
        c=!c;
        z++;
    }

    cout << sum1-sum2 << endl;
}
