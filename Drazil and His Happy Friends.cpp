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
     int n,m,cnt,x;
     cin>>n>>m;
     int a[n]={0},b[m]={0};
     cin>>cnt;
     com(i,cnt)
     {
          cin>>x;
          a[x]++;
     }
     cin>>cnt;
     com(i,cnt)
     {
          cin>>x;
          b[x]++;
     }
     com(i,n*m*5)
     {
          a[i%n]=max(a[i%n],b[i%m]);
          b[i%m]=max(a[i%n],b[i%m]);
     }
     com(i,n)
     {
          if(a[i]==0)
          {
               cout << "No" << endl;
               return 0;
          }
     }
     com(i,m)
     {
          if(b[i]==0)
          {
               cout << "No" << endl;
               return 0;
          }
     }
     cout << "Yes" << endl;
}
