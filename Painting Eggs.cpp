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
     string s="";
     int n;
     cin>>n;
     int x,y,sum1=0,sum2=0,a=0,g=0;
     com(i,n)
     {
          cin>>x>>y;
          sum1=a+x;
          sum2=g+y;
          if(abs(sum1-g)>abs(sum2-a))
          {
               s+='G';
               g=sum2;
          }
          else
          {
               s+='A';
               a=sum1;
          }
     }
     if(abs(a-g)<=500)
          cout << s << endl;
     else
          cout << -1 << endl;
}
