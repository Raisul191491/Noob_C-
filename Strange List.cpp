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
        int n,x,y;
        cin>>n>>x;
        ll sum=0,a[n],ans=0,f=1000000;
        vector<ll>fuc,vec;
        com(i,n)
        {
            cin>>y;
            fuc.push_back(y);
            sum+=y;
            ll cnt=0;
            while(y%x==0)
            {
                cnt++;
                y/=x;
            }
            f=min(f,cnt);
            vec.push_back(f);
        }
        y=0;
        while(y<fuc.size())
        {
            ll cnt=0,beg=fuc[y];
            while(fuc[y]%x==0)
            {
                cnt++;

                fuc[y]/=x;
            }
            ll dif=min(vec[y],f+1);
            sum+=beg*min(cnt,dif);
            y++;
        }
        cout << sum << endl;
    }
}
