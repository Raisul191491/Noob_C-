#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
#define endl          '\n'
using namespace std;
int main()
{
     ll n,x,y;
     cin>>n;
     ll cnt=1,sta=0,en=0,con=0,mx,mn;
     com(i,n)
     {
          cin>>x>>y;
          mx=max(sta,en);
          mn=min(x,y);
          cnt+=max(mn-mx+1,0LL);
          if(sta==en)
               cnt--;
          sta=x;
          en=y;
     }
     cout << cnt << endl;
}
