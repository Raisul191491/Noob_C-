#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     int n,cnt=0;
     string a,b;
     cin>>n>>a>>b;
     com(i,n)
     {
          if(a[i]!=b[i] && a[i+1]!=b[i+1] && a[i+1]==b[i] && a[i]==b[i+1] && i+1<n)
          {
               cnt++;
               i++;
          }
          else if(a[i]!=b[i])
          {
               cnt++;
          }
     }
     cout << cnt << endl;
}
