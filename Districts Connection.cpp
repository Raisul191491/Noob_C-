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
//          map<int,int>mp;
          int n,f=-1;
          cin>>n;
          int a[n];
          com(i,n)
          {
               cin>>a[i];
//               mp[a[i]]++;
//               if(mp[a[i]]>n/2)
//                    f=1;
               if(a[i]!=a[0]) f=i;
          }
          if(f==-1)
               cout << "NO" << endl;
          else
          {
               cout << "YES" << endl;
               dom(i,n-1)
               {
                    if(a[i]!=a[0])
                         cout << 1 << " " << i+1 << endl;
                    else
                         cout << f+1 << " " << i+1 << endl;
               }
          }

     }
}
