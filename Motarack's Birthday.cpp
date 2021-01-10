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
          int n;
          cin>>n;
          int a[n];
          vector<int>v;
          com(i,n)
          {
               cin>>a[i];
          }
          com(i,n)
          {
               if(a[i]==-1)
               {
                    if(i>0 && a[i-1]>-1)
                         v.push_back(a[i-1]);
                    if(i<n-1 && a[i+1]>-1)
                         v.push_back(a[i+1]);
               }
          }
          if(v.size()==0)
          {
               cout << "0 1" << endl;
               continue;
          }
          sortvi(v);
          int mid=(v[0]+v[v.size()-1])/2,mx=-1;
          if(a[0]==-1) a[0]=mid;
          dom(i,n-1)
          {
               if(a[i]==-1)
               {
                    mx=max(mx,abs(mid-a[i-1]));
                    a[i]=mid;
               }
               else
                    mx=max(mx,abs(a[i]-a[i-1]));
          }
          cout << mx << " " << mid << endl;
     }
}
