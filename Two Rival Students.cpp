#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(t)
     {
          int n,x,a,b,ld,dis,td;
          cin>>n>>x>>a>>b;
          ld=n-1;
          dis=abs(a-b);
          td=dis+x;
          if(td>ld)
               cout << ld <<endl;
          else
               cout << td << endl;
     }
}
