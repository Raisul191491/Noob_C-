#include<bits/stdc++.h>
typedef long long     ll;
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
using namespace std;
map<vector<int>,int>mp;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int n,x;
          cin>>n>>x;
          int a[n+5]={0};
          com(i,n-1)
          {
               int p,q;
               cin>>p>>q;
               a[p]++,a[q]++;
          }
          if(a[x]<=1) cout << "Ayush\n";
          else
          {
               if(n%2==0) cout << "Ayush\n";
               else cout << "Ashish\n";
          }
     }
}
