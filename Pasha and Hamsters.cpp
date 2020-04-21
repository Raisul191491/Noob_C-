#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,a,b;
     cin>>n>>a>>b;
     int app[n+1]={0};
     dom(i,a)
     {
          int x;
          cin>>x;
          app[x]=1;
     }
     dom(i,b)
     {
          int x;
          cin>>x;
          if(app[x]!=1)
               app[x]=2;
     }
     dom(i,n)
     {
          if(app[i]==1 || app[i]==2)
               cout << app[i] << " ";
     }
}
