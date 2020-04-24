#include<bits/stdc++.h>
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
     long long int n,m,mx=0,mn=0;
     cin>>n>>m;
     int a[m],b[m];
     com(i,m)
     {
          cin>>a[i];
          b[i]=a[i];
     }
     sortI(a,m);
     int x=0,z=n;
     while(z!=0 && x<m)
     {
          if(a[x]!=0) // adding until the lowest is clear
          {
               mn+=a[x];
               a[x]--;
               z--;
          }
          else
               x++;
     }
     sortD(b,m);
     //cout << n;
     z=n;
     while(z!=0)
     {
          mx+=b[0]; // adding the highest
          b[0]--;
          z--;
          sortD(b,m); // bringing the highest to the front
     }
     cout << mx << " " << mn << endl;
}
