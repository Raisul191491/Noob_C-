#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          float a,b,c,d,k,x,y;
          cin>>a>>b>>c>>d>>k;
          x=ceil(a/c);
          y=ceil(b/d);
          if(x+y<=k)
               cout << x << " " << y <<endl;
          else
               cout << "-1\n";
     }
}
