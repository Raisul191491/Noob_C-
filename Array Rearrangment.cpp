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
     com(i,t)
     {
          int n,x,f=0;
          cin>>n>>x;
          int a[n],b[n];
//          vector<int>num,pos;
          com(i,n)
          {
               cin>>a[i];
          }
          com(i,n)
          {
               cin>>b[i];
          }
          sortD(a,n);
          sortI(b,n);
          com(i,n)
          {
               if(b[i]+a[i]>x)
               {
                    f=1;
                    break;
               }
          }
          if(f)
               cout << "No" << endl;
          else
               cout << "Yes" << endl;
     }
}
