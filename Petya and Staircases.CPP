#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,step=1;
     cin>>n>>m;
     int st[m];
     com(i,m)
     {
          cin>>st[i];
     }
     sortI(st,m);
     if(st[0]==1 || st[m-1]==n)
     {
          cout << "NO\n";
          return 0;
     }
     com(i,m)
     {
          if(st[i]+1==st[i+1])
               step++;
          else
               step=1;
          if(step>2)
          {
               cout << "NO\n";
               return 0;
          }
     }
     cout<< "YES\n";
}
