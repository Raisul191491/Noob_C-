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
     int t;
     cin>>t;
     int a[5],b[5];

     com(i,t) cin>>a[i]>>b[i];

     if(t==1)
          cout << -1 << endl;
     else
     {
          com(i,t)
          {
               for(int j=i+1;j<t;j++)
               {
                    if(a[i]!=a[j]&&b[i]!=b[j])
                    {
                         cout << abs((a[i]-a[j])*(b[i]-b[j])) << endl;
                         return 0;
                    }
               }
          }
          cout << -1 << endl;
     }
}
