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
     int n,mn=0,mx=0;
     cin>>n;
     mn=(n/7)*2;
     if(n%7==6)
          mn++;
     mx=(n/7)*2;
     if(n%7<2)
          mx+=n%7;
     else if(n%7>=2)
          mx+=2;
     cout << mn << " " << mx << endl;
}
