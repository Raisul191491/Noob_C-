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
    com(i,t)
    {
        ll n,w;
        cin>>n>>w;
        ll a[n],sum=0,f=0;
        vector<pair<ll,ll>>v;
        vector<ll>ss;
        com(i,n)
        {
            cin>>a[i];
            if(a[i]<=w)
            {
                if(a[i]>=(w+1)/2)
                    f=i+1;
                if(sum+a[i]<=w)
                {
                     sum+=a[i];
                     ss.push_back(i+1);
                }
            }
        }
        if(f)
          cout << 1 << endl << f << endl;
        else
        {
             if(sum>=(w+1)/2)
             {
                  cout << ss.size() << endl;
                  com(j,ss.size())
                  {
                       cout << ss[j] << ' ';
                  }
                  cout << endl;
             }
             else
               cout << -1 << endl;
        }
    }
}
