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
     int n,m,f=1;
     cin>>n>>m;
     int a[n][m];
     com(i,n)
     {
          com(j,m)
          {
               cin>>a[i][j];
          }
     }
     com(i,n)
     {
          com(j,m)
          {
               if(a[i][j] && (i==0 or j==0 or i==n-1 or j==m-1))
               {
                    cout << 2 << endl;
                    f=0;
                    break;
               }
          }
          if(!f)
               break;
     }
     if(f) cout << 4 << endl;
}
