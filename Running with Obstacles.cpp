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
     int n,m,s,d;
     cin>>n>>m>>s>>d;
     int a[n],obs=0,dis=0;
     vector<pair<int,int>>pos;
     com(i,n)
     {
          cin>>a[i];
     }
     com(i,n)
     {
          dis=a[i]-obs-1;
          if(dis>=s)
          {
               pos.push_back({0,a[i]-1});
               pos.push_back({1,a[i]});
               while(i<i-1)
               {
                    if(a[i]+d-1>a[i+1])
                         i++;
                    else
                    {
                         i--;
                         break;
                    }
               }
               obs=a[i];
          }
          else
          {
               cout << "IMPOSSIBLE" << endl;
          }
     }
}
