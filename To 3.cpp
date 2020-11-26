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
     ll n,x,sum=0,cnt=0,ans;
     cin>>n;
     x=n;
     map<ll,ll>mp;
     while(x)
     {
          sum+=x%10;
          mp[((x%10)%3)]++;
          x/=10;
          cnt++;
     }
     if(sum%3==0)
          cout << 0 << endl;
     else
     {
          sum=(mp[1]+mp[2]*2)%3;
          if(sum==1)
          {
               if(mp[1]>0)
                    ans=1;
               else if(mp[2]>1)
                    ans=2;
               else
                    ans=-1;

          }
          else
          {
               if(mp[2]>0)
                    ans=1;
               else if(mp[1]>1)
                    ans=2;
               else
                    ans=-1;
          }
          if(ans==cnt)
               cout << -1 << endl;
          else
               cout << ans << endl;
     }
}
