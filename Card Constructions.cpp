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
ll pos[100001]={0};
int main()
{
     dom(i,100000)
     {
          pos[i]=pos[i-1]+3*i-1;
     }
     int t;
     cin>>t;
     com(i,t)
     {
          int n,cnt=0;
          cin>>n;
          while(n>1)
          {
               int r=upper_bound(pos,pos+100000,n)-pos;
               r-=1;
               //cout << r << " ";
               //cout << pos[r];
               n-=pos[r];
               cnt++;
          }
          cout << cnt << endl;
     }
}
