#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int y,b,r,orna=0;
     cin>>y>>b>>r;
     while(1)
     {
          if(b>=(r-1))
          {
               orna=orna+r+r-1;
               break;
          }
          else
               r--;
     }
     while(1)
     {
          if(y>=(r-2))
          {
               orna+=(r-2);
               break;
          }
          else
          {
               orna-=2;
               r--;
          }
     }
     cout << orna <<endl;
}
