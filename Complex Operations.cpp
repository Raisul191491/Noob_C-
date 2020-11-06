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
     ll n,q,cut=0,y;
     cin>>n>>q;
     vector<ll>num;
     ll x;
     com(i,n)
     {
          cin>>x;
          num.push_back(x);
     }
     sortvi(num);
     com(i,q)
     {
          cin>>x;
          if(x==1)
          {
               cin>>y;
               cut+=y;
          }
          else
          {
               ll l,r,k;
               cin>>l>>r>>k;
               ll beg = lower_bound(num.begin(),num.end(),l+cut)-num.begin();
               ll sta = upper_bound(num.begin(),num.end(),r+cut)-num.begin();
               if(sta-beg<k)
                    cout << -1 << endl;
               else
                    cout << num[beg+k-1]-cut << endl;
          }
     }
}
