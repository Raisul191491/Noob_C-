#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n,m,bn=0;
     cin>>n>>m;
     bool a[m+1];
     for(int i=1;i<=m;i++)
     {
          a[i]=true;
     }
     com(i,n)
     {
          int l,r;
          cin>>l>>r;
          for(int i=l;i<=r;i++)
               a[i]=false;
     }
     for(int i=1;i<=m;i++)
     {
          if(a[i]==true)
               bn++;
     }
     cout << bn <<endl;
     for(int i=1;i<=m;i++)
     {
          if(a[i]==true)
               cout << i << " ";
     }
}
